FROM ubuntu:22.04

#Prevent blocking prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

#
RUN rm /etc/dpkg/dpkg.cfg.d/excludes #Necessary to install man pages
RUN apt-get update && apt-get install -y \
    build-essential \
    clang \
    gdb \
    git \
    valgrind \
    man-db \
    manpages \
    manpages-dev \
    vim \
    zsh \
    python3-setuptools \
    pipx \
    curl \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
RUN pipx install norminette && pipx ensurepath
RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
RUN cd ~ && git clone https://github.com/un418/.dotfiles.git && cd .dotfiles && ./deploy_dotfiles.sh
RUN echo "y" | unminimize

ENTRYPOINT ["/bin/zsh"]

# docker build -t 42dev:0.1 .
# docker builder prune -f