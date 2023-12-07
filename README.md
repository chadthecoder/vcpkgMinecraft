# Run to clone with a copy of vcpkg
git clone --recurse-submodules git@github.com:chadthecoder/vcpkgMinecraft.git

# If already cloned and need to get vcpkg, then run
git submodule update --init --recursive

# Run
run ./prebuild.sh,
# This creates vcpkg_installed folder
    sudo ./lib/vcpkg/vcpkg install,
# Back to bash files
    ./build.sh,
    ./run.sh

# If running .sh doesnt work?
chmod u+x prebuild.sh
chmod u+x build.sh
chmod u+x run.sh

add .sh file that takes in arguement and builds everything?

# ./lib/vcpkg/vcpkg to use vcpkg
Example:
    ./lib/vcpkg/vcpkg add port [dep name]