#ifndef UMAMBA_LIST_HPP
#define UMAMBA_LIST_HPP

#include "mamba/context.hpp"

#ifdef VENDORED_CLI11
#include "mamba/CLI.hpp"
#else
#include <CLI/CLI.hpp>
#endif

#include <string>


void
init_list_parser(CLI::App* subcom);

void
set_list_command(CLI::App* subcom);

void
load_list_options(mamba::Context& ctx);

void
list_packages(std::string regex);

struct formatted_pkg
{
    std::string name, version, build, channel;
};

bool
compare_alphabetically(const formatted_pkg& a, const formatted_pkg& b);

#endif
