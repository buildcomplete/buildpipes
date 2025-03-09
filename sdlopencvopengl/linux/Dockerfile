# Use a base image with necessary tools
FROM ubuntu:20.04

# Set the locale to Spain to avoid interactive prompts
ENV LANG=C.UTF-8
ENV LANGUAGE=C.UTF-8
ENV LC_ALL=C.UTF-8
ENV DEBIAN_FRONTEND=noninteractive

# Update the package list
RUN apt-get update

# Install build-essential
RUN apt-get install -y build-essential

# Install CMake
RUN apt-get install -y cmake

# Install OpenGL and related libraries
RUN apt-get install -y libopengl-dev libglu1-mesa-dev libglfw3-dev

# Install OpenCV
RUN apt-get install -y libopencv-dev

# Install libraries for maximum SDL capability
RUN apt-get install -y pkg-config
RUN apt-get install -y ninja-build
# gnome-desktop-testing
RUN apt-get install -y libasound2-dev libpulse-dev
RUN apt-get install -y libaudio-dev libjack-dev libsndio-dev libx11-dev libxext-dev
RUN apt-get install -y libxrandr-dev libxcursor-dev libxfixes-dev libxi-dev libxss-dev libxtst-dev
RUN apt-get install -y libxkbcommon-dev libdrm-dev libgbm-dev libgl1-mesa-dev libgles2-mesa-dev
RUN apt-get install -y libegl1-mesa-dev libdbus-1-dev libibus-1.0-dev libudev-dev
#RUN apt-get install -y libpipewire-0.3-dev libwayland-dev libdecor-0-dev liburing-dev

# Download and build SDL3 from source
RUN apt-get install -y wget
RUN wget -P /tmp/sdl3 https://github.com/libsdl-org/SDL/releases/download/release-3.2.8/SDL3-3.2.8.tar.gz
RUN tar -xzf /tmp/sdl3/SDL3-3.2.8.tar.gz -C /tmp/sdl3
WORKDIR /tmp/sdl3/SDL3-3.2.8
RUN cmake -S . -B build
RUN cmake --build build
RUN cmake --install build --prefix /usr/local

# Set up the working directory
WORKDIR /app
