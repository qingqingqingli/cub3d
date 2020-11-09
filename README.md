[![Logo](https://github.com/qingqingqingli/readme_images/blob/master/codam_logo_1.png)](https://github.com/qingqingqingli/cub3d)

# cub3d
***This project is a graphic design project, inspired by the famous game [Wolfenstein 3D](http://users.atw.hu/wolf3d/). We need to create a "realistic" 3D graphical representation of the inside of a maze from a first person perspective, using Ray-Casting principles.***

This project also enables us to improve skills in: windows, colors, events, fill shapes, etc.

## Technical considerations

- Allowed functions: ```open```, ```close```, ```read```, ```write```, ```malloc```, ```free```, ```perror```, ```strerror```, ```exit```, all functions of the ```math``` library and the ```MinilibX``` library
- All heap allocated memory space must be properly freed when necessary
- Management of window must remain smooth
- Allow for the display of different wall textures
- Allow for setting the floor and ceilling colors to two different colors
- Program must take a scene description file as a first argument

## Disclaimer

**This repo provides two versions (Linux & MacOS), due to major differences between these two operation systems:**

- The ```MinilibX``` library needs to be compiled differently on Linux and MacOS
- ```ft_reset_resolution()``` function from the ```MinilibX``` library is not provided on the Linux version
- The keycode value for movement and closing windows are different

**If you are on a Linux distribution, make sure that you installed the packages below:**

```shell
sudo apt-get update && sudo apt-get install xorg libxext-dev zlib1g-dev
```

## How to test

> Run the following commands. A few map files (```xx.cub```) are provided in the ```maps``` directory. Replace ```choose_one_file.cub``` with the file of your choice

```shell
$ git clone https://github.com/qingqingqingli/cub3d
# choose linux / MacOS based on your operation system
$ cd cub3d/linux_version
$ make
$ ./cub3d maps/choose_one_file.cub
```

## Examples

- Create the ```cub3d``` executable. A window will pop up when you run the executable with a map file

[![cub3d_1](https://github.com/qingqingqingli/readme_images/blob/master/cub3d_1.png)](https://github.com/qingqingqingli/cub3d)

[![cub3d_2](https://github.com/qingqingqingli/readme_images/blob/master/cub3d_2.png)](https://github.com/qingqingqingli/cub3d)

- Press ```W / A / S / D``` key to move and ```Left / Right``` key to rotate

[![cub3d_4](https://github.com/qingqingqingli/readme_images/blob/master/cub3d_4.gif)](https://github.com/qingqingqingli/cub3d)

## TO DO

- [ ] To make one version that works for Linux and MacOS 

<!-- to do list:
- Add instructions on how to make it work on Linux
- Add Makefil to compile on MacOS and also Linux
- set the color to -1 so if not set correctly it won't run (done) -->

