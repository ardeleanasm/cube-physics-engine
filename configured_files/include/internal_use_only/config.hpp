#ifndef MYPROJECT_CONFIG_HPP
#define MYPROJECT_CONFIG_HPP

// this is a basic example of how a CMake configured file might look
// in this particular case, we are using it to set the version number of our executable
namespace myproject::cmake {
static constexpr std::string_view project_name = "cube-physics";
static constexpr std::string_view project_version = "0.0.1";
static constexpr int project_version_major { 0 };
static constexpr int project_version_minor { 0 };
static constexpr int project_version_patch { 1 };
static constexpr int project_version_tweak {  };
static constexpr std::string_view git_sha = "";
}// namespace myproject::cmake

#endif
