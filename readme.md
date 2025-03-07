# install dependencies
sudo apt update
sudo apt install --yes --no-install-recommends \
    git \
    build-essential \
    cmake \
    libssl-dev \
    libasio-dev \
    libtinyxml2-dev \
    openjdk-11-jre-headless \
    python3

# install colcon 
pip3 install -U colcon-common-extensions vcstool

# import repos
vcs import src-2.6.x < fastdds-2.6.x.repos

# build 
bash build.sh