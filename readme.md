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
vcs import src < fastdds.repos

# build 
colcon build --packages-up-to fastrtps