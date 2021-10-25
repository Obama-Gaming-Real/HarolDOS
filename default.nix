with (import <nixpkgs> {});
derivation {
    name = "HarolDOS";
    builder = "${bash}/bin/bash";
    args = [ ./build.sh ];
    inherit gcc coreutils;
    src = ./HarolDOS.cpp;
    src2 = ./ChinaDOS.cpp;
    system = builtins.currentSystem;
}