#include "constants.h"
#include "configHandler.h"

namespace constants {
const std::string GIT_IGNORE = ".gitignore";
const std::string WORKFLOW_STRING = "Workflow";
const std::string LICENSE = "License";
std::string REPOSITORY_PATH;
std::string WORKFLOW_PATH;
const std::string README = "readMe";
const std::string TEST_STRING = "tests";
const std::string LEAK_STRING = "Credential Leaks";

const std::string RED = "\U0001F534";
const std::string GREEN = "\U0001F7E2";
const std::string YELLOW = "\U0001F7E1";
const std::string WHITE = "\u26AA";

extern const std::string PATH_REPORT_CREDENTIALS =
    "../Repository/gitleaksReport.json";

const std::string LINK_LICENSE = "https://choosealicense.com/";
const std::string LINK_README =
    "https://docs.github.com/en/repositories/"
    "managing-your-repositorys-settings-and-features/"
    "customizing-your-repository/about-readmes";
const std::string LINK_IGNORE = "https://github.com/github/gitignore";
const std::string LINK_TESTS = "https://learn.microsoft.com/en-us/dotnet/core/"
                               "testing/unit-testing-best-practices";
const std::string LINK_WORKFLOW =
    "https://docs.github.com/en/actions/writing-workflows";

const std::string NIL = "No issues detected";
const std::string NO_CHECKS = "No checks were performed";

const std::string PATH_CONFIG = "../config.json";

} // namespace constants

namespace CommonSearchTerms {
std::vector<std::string> gitIgnoreAlts = {constants::GIT_IGNORE};

std::vector<std::string> licenseAlts = {"license", "license.txt", "unlicense",
                                        "unlicense.txt", "copying"};
std::vector<std::string> readmeAlts = {"readme", "readme.md"};

std::vector<std::string> testAlts = {"test", "tests"};

} // namespace CommonSearchTerms