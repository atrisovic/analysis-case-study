
BDIR = bin
HDIR = include
CDIR = src
ODIR = obj
DDIR = dep

CLEANUP = $(ODIR) $(DDIR)

HDRDIRS = $(HDIR)
LIBDIRS = $(LDIR)

BINLIST = ModelFixing OSMassFit
OBJLIST = $(BINLIST) nobanner

RLIBLIST = Core RIO Net Hist Graf Graf3d Gpad Tree Rint Postscript Matrix Physics MathCore Thread RooFit RooFitCore Gui TMVA TMVAGui

#-------------------------------------------------------------------
# There should be no need to change much below this point.
#-------------------------------------------------------------------

# Find the root version and rootsys directory.
ROOTVER = $(shell sed '/^root[[:blank:]]*=/!d;s/^root[[:blank:]]*=[[:blank:]]*\([^[:blank:]\#]*\).*/\1/g' ../cfg/versions)
ROOTSYS = $(shell which lb-run > /dev/null 2>&1 && lb-run root/$(ROOTVER) echo '$$ROOTSYS' || echo ''  )
GPP     = $(shell which lb-run > /dev/null 2>&1 && lb-run root/$(ROOTVER) which g++        || which g++)

# Find the root header and lib directories.
ROOTHDR  = $(shell test -n "$(ROOTSYS)" && readlink -e "$(firstword $(wildcard $(ROOTSYS)/include/root $(ROOTSYS)/include))" || root-config --incdir)
ROOTLIB  = $(shell test -n "$(ROOTSYS)" && readlink -e "$(firstword $(wildcard $(ROOTSYS)/lib/root     $(ROOTSYS)/lib    ))" || root-config --libdir)

# Unexistent files needed by root. I cannot believe root can even compile.
PATCHES  = $(HDIR)/snprintf.h $(HDIR)/strlcpy.h

CXX     = $(GPP) -std=c++1y
CXXL    = $(GPP) -std=c++1y

HDRSTR = $(foreach dir,$(HDRDIRS),-I $(dir))
LIBSTR = $(foreach dir,$(LIBDIRS),-L $(dir)) $(foreach lib,$(LIBLIST),-l$(lib))

CFLAGS  = -g -O -Wall -fPIC $(HDRSTR) -I $(ROOTSYS)/include
DFLAGS  = -I $(ROOTSYS)/include
LFLAGS  = -g -O -Wall -fPIC $(LIBSTR)
RFLAGS  = -L $(ROOTLIB) $(foreach lib,$(RLIBLIST),-l$(lib))

RM      = rm -rf
LN      = ln -fs

.PHONY: tidy sweep clean

BFILES = $(foreach bin,$(BINLIST),$(BDIR)/$(bin))
OFILES = $(foreach obj,$(OBJLIST),$(ODIR)/$(obj).o)
DFILES = $(foreach dep,$(OBJLIST),$(DDIR)/$(dep).d)

all: $(BFILES)

# Rules for dependency files.
$(DFILES): $(DDIR)/%.d: $(CDIR)/%.cc $(wildcard $(HDIR)/$(firstword $(subst /, ,$(PROJECT)))/%.hh) $(MAKEFILE_LIST)
	@ mkdir -p $(dir $@)
	@ echo $(CXX) -MM -MF $@ -MT $$(echo $@ | sed "s,^$(DDIR),$(ODIR),g;s/\.d$$/\.o/g") $< $(DFLAGS) -I $(HDIR)
	@ $(CXX) -MM -MF $@ -MT $$(echo $@ | sed "s,^$(DDIR),$(ODIR),g;s/\.d$$/\.o/g") $< $(DFLAGS) -I $(HDIR)

# Rules for objects.
$(OFILES): $(ODIR)/%.o: $(CDIR)/%.cc $(DDIR)/%.d $(MAKEFILE_LIST)
	@ mkdir -p $(dir $@)
	$(CXX) -o $@ -c $< $(CFLAGS)

# Rules for binaries.
$(BFILES): $(BDIR)/%: $(ODIR)/%.o $(ODIR)/nobanner.o $(DDIR)/%.d $(MAKEFILE_LIST)
	@ mkdir -p $(dir $@)
	$(CXX) -o $@ $< $(ODIR)/nobanner.o $(LFLAGS) $(RFLAGS)

# Include all existent dependency files.
include $(wildcard $(DFILES))

# This rule removes files and directories that may be needed to compile or run the programs.
tidy:
	@ $(RM)	$(HDIR)/root $(PATCHES)
	@ if [ $(ODIR) != "." ] && [ $(ODIR) != ".." ];	\
	then						\
		$(RM) $(ODIR);				\
	else						\
		$(RM) *.o;				\
	fi
	@ if [ $(DDIR) != "." ] && [ $(DDIR) != ".." ];	\
	then						\
		$(RM) $(DDIR);				\
	else						\
		$(RM) *.d;				\
	fi

# This rule cleans up backups and stuff produced by the editing programs.
sweep:
	@ $(RM) $(ELF).out
	@ find $(wildcard $(BDIR) $(HDIR) $(CDIR) $(ODIR) $(DDIR)) -name '*~' -or -regex '.*\/\.*\#.*' -exec $(RM) {} \+

clean: tidy
	@ $(RM) $(ELF).out
	@ find $(wildcard $(BDIR) $(HDIR) $(CDIR)) -name '*~' -or -regex '.*\/\.*\#.*' -exec $(RM) {} \+
