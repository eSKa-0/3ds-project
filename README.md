# 3ds-project
## install devKitPro on linux
``` ubuntu
sudo wget https://apt.devkitpro.org/install-devkitpro-pacman
sudo chmod +x install-devkitpro-pacman
sudo ./install-devkitpro-pacman
```
## install the essentials
``` ubuntu
sudo dkp-pacman -S devkitARM libctru
```
## Compile
```
make
```
## Run
1. Copy the `.3dsx` file to the `\3ds\` folder on your SD card
2. Launch it through the Homebrew Launcher

### Next on the list
Turn the compiled code into `.cia` files for easy installation and running.
