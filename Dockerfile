FROM centos:centos7

RUN yum install -y libX11 libXpm libXft libXext libSM gcc-c++ curl


ENV ROOT_TAR="root_v6.08.06.Linux-centos7-x86_64-gcc4.8.tar.gz"
ENV ROOT_DL="https://root.cern.ch/download/$ROOT_TAR"
ENV ROOTSYS="/cern/root/"

ENV PATH="$ROOTSYS/bin:$PATH"
ENV LD_LIBRARY_PATH="$ROOTSYS/lib:$LD_LIBRARY_PATH"

RUN mkdir /cern \
  && curl ${ROOT_DL} \
  | tar -xzC /cern

RUN yum install -y krb5-workstation.x86_64

ADD krb5.conf /etc/
RUN mkdir Analysis
WORKDIR /Analysis

RUN mkdir Step4_tmva 
ADD Step4_tmva Step4_tmva

ADD run_all.sh .
#RUN bash -c "run_all.sh"
