// Simulator includes
#include "library/logger/logger.hpp"

// Add custom include files
#include "./simulation/case/c2a_core_sample_case.h"

// debug print of initialize file path
void print_path(std::string path) {
#ifdef WIN32
  std::cout << path << std::endl;
#else
  const char *rpath = realpath(path.c_str(), NULL);
  if (rpath) {
    std::cout << rpath << std::endl;
    free((void *)rpath);
  }
#endif
}

// Main function
int main() {
  // Set initialize file
  std::string ini_file = "../../data/initialize_files/c2a_core_sim_base.ini";

  std::cout << "Starting simulation..." << std::endl;
  std::cout << "\tIni file: ";
  print_path(ini_file);

  auto simcase = C2aCoreSampleCase(ini_file);
  simcase.Initialize();
  simcase.Main();

  return EXIT_SUCCESS;
}
