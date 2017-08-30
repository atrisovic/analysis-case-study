FROM centos:latest 
MAINTAINER Ana Trisovic "ana.trisovic@cern.ch"

USER root

RUN yum -y update
RUN yum -y install epel-release 
RUN yum -y install gcc-c++ bzip2 git vim libpng libjpeg \
     python-devel libSM libX11 libXext libXpm libXft gsl-devel python-pip make cmake3\
     && yum -y clean all
RUN pip install --upgrade pip && pip install jupyter
RUN ln -s /usr/bin/cmake3 /usr/bin/cmake

# ROOT
ENV ROOTSYS         "/opt/root"
ENV PATH            "$ROOTSYS/bin:$ROOTSYS/bin/bin:$PATH"
ENV LD_LIBRARY_PATH "$ROOTSYS/lib:$LD_LIBRARY_PATH"
ENV PYTHONPATH      "$ROOTSYS/lib:$PYTHONPATH"

ADD https://root.cern.ch/download/root_v6.06.02.Linux-centos7-x86_64-gcc4.8.tar.gz /var/tmp/root.tar.gz
RUN tar xzf /var/tmp/root.tar.gz -C /opt && rm /var/tmp/root.tar.gz

RUN git clone https://github.com/atrisovic/analysis-case-study.git
WORKDIR analysis-case-study 

