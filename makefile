

all: 2D_Optimisation_Pi.pdf


# Compilation rules for step 4 binaries.
Step4_tmva/bin/TMVAClassification:
	@ cd Step4_tmva; $(MAKE) $(@:Step4_tmva/%=%)

Step4_tmva/bin/addBDT:
	@ cd Step4_tmva; $(MAKE) $(@:Step4_tmva/%=%)

Step4_tmva/bin/OSMassFit:
	@ cd Step4_tmva; $(MAKE) $(@:Step4_tmva/%=%)

artifacts:
	@ mkdir -p $@


# Results of step 4 execution.
weights/TMVAClassification_BDTB.class.C: Step4_tmva/bin/TMVAClassification
	@ bin/run trainmva > trainmva.out 2> trainmva.err

artifacts/D2PiMuMuOS.root: weights/TMVAClassification_BDTB.class.C | artifacts
	@ bin/run addbdt > addbdt.out 2> addbdt.err

2D_Optimisation_Pi.pdf: artifacts/D2PiMuMuOS.root
	@ bin/run optimisentp > optimisentp.out 2> optimisentp.err



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
