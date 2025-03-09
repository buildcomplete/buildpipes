Test the build pipeline using these commands

Assuming the build pipeline container is build with image tag **sdlglcv_lcompiler**


```
docker run --rm -v .:/app/src -w /app/src -it sdlglcv_lcompiler /bin/bash
mkdir build
cd build
cmake ..
make
cd ..
mkdir dist
sh copy_deps.sh
```
After this, the **hello_world** binary is in the dist folder.
on the host, navigate to the dist and run ./hello_world

