import bake.build;
import std;

int main() {
    bake::Builder b;
    const auto upstream = std::string(b.dep_src_dir("upstream"));

    b.sources({upstream + "/lib/*.c", "sfparse/sfparse.c"})
        .public_headers({"include", upstream + "/lib/includes"})
        .include_dirs(".");

    return b.build();
}
