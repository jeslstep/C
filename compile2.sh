set -e # If a command fails, exit the script
SOURCE_PATH=$1 # One required option

# Funtion: do_compile
# param 1: Required. relative or fully qualified file path to c file to compile. E.g. /src/addition/add.c
# param 2: Required. output file path name to compile to. E.g. src/addition/add
do_compile() {
    local file_path=$1
    local compile_to=$2
    gcc -Wall ${file_path} -o ${compile_to}
}

do_compile_all() {
    local root_dir=$1
    local c_files=`find ${root_dir} | grep "\.c"`
    for f in ${c_files} ; do
        do_compile $f ${f%%.*}
    done
}

if [ ! -z ${SOURCE_PATH} ]; then
    do_compile_all ${SOURCE_PATH}
else
    echo "Usage: $0 rootDirectoryContainingCFilesToCompile. E.g. src"
    exit 1
fi
