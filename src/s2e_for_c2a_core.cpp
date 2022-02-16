// Simulator includes
#include "Initialize.h"
#include "Logger.h"
#include "SimulationCase.h"

// Add custom include files
#include "./Simulation/Case/c2a_core_sample_case.h"

// degub print of initialize file path
void print_path(std::string path)
{
#ifdef WIN32
  std::cout << path << std::endl;
#else
  const char *rpath = realpath(path.c_str(), NULL);
  if(rpath) {
    std::cout << rpath << std::endl;
    free((void *)rpath);
  }
#endif
}

// Main function
int main(int argc, char* argv[])
{
  // Set initialize file
  std::string ini_file = "../../data/ini/c2a_core_sim_base.ini";

  std::cout << "Starting simulation..." << std::endl;
  std::cout << "\tIni file: ";
  print_path(ini_file);

  auto simcase = C2aCoreSampleCase(ini_file);
  simcase.Initialize();
  simcase.Main();

  return EXIT_SUCCESS;
}
