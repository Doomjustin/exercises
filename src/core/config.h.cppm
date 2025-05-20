export module ex.config;

export
namespace ex {

constexpr auto PROJECT_VERSION = "@PROJECT_VERSION@";

constexpr int PROJECT_MAJOR = @PROJECT_VERSION_MAJOR@;

constexpr int PROJECT_MINOR = @PROJECT_VERSION_MINOR@;

constexpr int PROJECT_PATCH = @PROJECT_VERSION_PATCH@;

constexpr auto PROJECT_NAME = "@PROJECT_NAME@";

constexpr auto PROJECT_SOURCE_DIR = "@PROJECT_SOURCE_DIR@";

} // namespace ex