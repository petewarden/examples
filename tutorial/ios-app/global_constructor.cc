#include "global_variable.h"

class GlobalConstructor {
 public:
  GlobalConstructor() {
    SetGlobalVariable("Global constructor was called!");
  }
};

GlobalConstructor g_my_unreferenced_global;
