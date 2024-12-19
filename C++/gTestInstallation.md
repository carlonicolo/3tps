# Setting up Google Test on Linux

## Install Build Tools

### Install GCC or Clang

```bash
sudo apt update
sudo apt install build-essential cmake git
```

### *Download Google Test*  

*Clone the repository*  

```bash
git clone https://github.com/google/googletest.git
cd googletest
```

### *Build Google Test*  

*Use CMake to build the library:*  

```bash
mkdir build
cd build
cmake ..
make
```

### Set Up Your Project

Include the Google Test library in your CMake project.  
