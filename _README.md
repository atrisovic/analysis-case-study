Also check the cookiecutter version of this template: https://gitlab.cern.ch/lhcb-analysis-preservation/containerization-cookie

# Using this template
This template will **enable automatic containerization** on your analysis repository. 
You will get an executable [Docker](docker.io) image containing your analysis, which can be directly handed to analysis preservation. No setup work has to be done by the analysts. By default you will get
a full ROOT 6.11 setup. Additional, custom software (e.g. scikit-learn, the GSL, snakemake etc) can be easily added. Instructions below.


When you create a new analysis repository, follow these steps:
* Got to `Create` new project 
* On the project creation page choose `Import project from git repo by URL`
* Enter the URL of this template and add your CERN username and password `https://username:pwd@gitlab.cern.ch:8443/lhcb-analysis-preservation/containerisation-template.git`
* Under `Path`, choose an appropriate group (usually your WG or sub-WG)
* Create the project
* This will create your project repository with everything needed to containerize your analysis

As soon as you commit a change to your newly created repository you will note a
gitlab-ci runner starting to build your docker image.

You can inspected available images for your analysis in the `Registry` tab.

As soon as the image is build you can run the analysis inside docker as described below.

# Running the HelloWorld example in this template in docker
Log in to the gitlab registry with your cern login
```
docker login gitlab-registry.cern.ch
```
Run the template analysis container
```
docker run  gitlab-registry.cern.ch/lhcb-analysis-preservation/containerisation-template:latest
```
Or even better... run your analysis
```
docker run  gitlab-registry.cern.ch/<your_anlysis_path>:latest
```

# Adding your analysis code 
You have to do nothing special. Just put your analysis code into the repository as usual.
If you want the analysis to be runnable just put whatever commands are necessary into the
[`run.sh`](run.sh) shell script.

# Compiling your code
The container image already comes with cmake and gnu make.
If you have cmake scripts just add the build commands to the [`run.sh`](run.sh) shell script.
Alternatively you can add them already in the [`Dockerfile`](Dockerfile) (see below).

# Customizing the runtime environment (advanced)
The docker image is built on the official [ROOT docker container](https://hub.docker.com/r/rootproject/root-ubuntu16/).
If you need additional external software to run your analysis, all you need to do
is to modify the [`Dockerfile`](Dockerfile). The ROOT image is based on Ubuntu16 so you can
just use the usual package managers to install additional libraries. 

Some examples you can put into the [`Dockerfile`](Dockerfile):
```
RUN apt-get -y update \
    && apt-get -y install wget

# install conda to manage auxilliary packages
RUN echo 'export PATH=/opt/conda/bin:$PATH' > /etc/profile.d/conda.sh && \
    wget --quiet https://repo.continuum.io/miniconda/Miniconda-3.16.0-Linux-x86_64.sh && \
    /bin/bash Miniconda-3.16.0-Linux-x86_64.sh -b -p /opt/conda && \
    rm Miniconda-3.16.0-Linux-x86_64.sh && \
    /opt/conda/bin/conda install --yes conda==3.18.3

ENV PATH /opt/conda/bin:$PATH

```
Use `conda` to install scikit-learn
```
RUN conda install scikit-learn
```
Use `conda` to install a pipeline system and more python libraries
```
# Snakemake et al
RUN conda update conda
RUN conda create -y -f -n snake -c bioconda python=3.4 beautiful-soup=4.3.2 pyyaml=3.12
# RUN conda install -n snake -c anaconda jinja2=2.9.6
RUN conda install -n snake -c https://conda.anaconda.org/conda-forge gitpython
RUN conda install -n snake -c https://conda.anaconda.org/anaconda pytz=2016.10
RUN conda install -n snake -c bioconda snakemake=3.10.0
```

The GSL
```
# gsl and clang
RUN apt-get -y update \
    && apt-get -y install libgsl0ldbl libgsl0-dev
```
Some more useful tools
```
# another useful library
RUN apt-get -y update \
    && apt-get -y install graphviz exiv2

# exxiftool can add info to PDF files
RUN apt-get -y update \
    && apt-get -y install exiftool
```


## Compiling your analysis software in the container using cmake
This assumes you have a toplevel CMakefile in your project. You can just add a corresponding command into the [`Dockerfile`](Dockerfile). For example:
```
RUN mkdir -p build && cd build && cmake ../ && make
```








# Installing docker on your machine
https://docs.docker.com/engine/installation/#desktop