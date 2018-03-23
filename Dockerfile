FROM rootproject/root-ubuntu16

MAINTAINER sebastian.neubert@cern.ch

# adding the analysis code to the container
ADD . .
RUN chmod +x run.sh

CMD ["./run.sh"]
