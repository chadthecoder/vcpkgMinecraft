# Run to clone with a copy of vcpkg
git clone --recurse-submodules git@github.com:chadthecoder/vcpkgMinecraft.git

# Run if bash doesnt work?
run ./prebuild.sh, ./build.sh, and then ./run.sh

# If running .sh doesnt work?
chmod u+x prebuild.sh
chmod u+x build.sh
chmod u+x run.sh

sudo ./lib/vcpkg/vcpkg install

vcpkg install doesnt work?

add .sh file that takes in arguement and builds everything

# ./lib/vcpkg/vcpkg to use vcpkg
Example:
    ./lib/vcpkg/vcpkg add port [dep name]