from ubuntu:22.04
LABEL maintainer="danielisdan@naver.com"
RUN apt-get update
RUN apt-get install -y python3 vim sudo systemd

# Add user named hozy
RUN adduser --gecos hozy --disabled-password hozy
RUN usermod -s /bin/bash hozy
RUN usermod -aG sudo hozy
RUN echo hozy:1234 | chpasswd

# Change root user's color prompt
RUN sed -i "s/\(\s*PS1.*'\)\(.*\)\('.*\)/\1hozy_script_part \3/g" ~/.bashrc
RUN sed -i 's/hozy_script_part/\\[\\e[97;41m\\]\\u@\\h:\\w$\\[\\e[0m\\]/' ~/.bashrc

# Change hozy's color prompt
RUN sed -i "s/\(\s*PS1.*'\)\(.*\)\('.*\)/\1hozy_script_part \3/g" /home/hozy/.bashrc
RUN sed -i 's/hozy_script_part/\\[\\033[1;36m\\]\\u\\[\\033[1;31m\\]@\\[\\033[1;32m\\]\\h:\\[\\033[1;35m\\]\\w\\[\\033[1;31m\\]$\\[\\033[0m\\]/' /home/hozy/.bashrc
