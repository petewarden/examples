#include "global_variable.h"

static char* g_was_global_constructor_called = "Global constructor was not called";

void SetGlobalVariable(char* variable) {
  g_was_global_constructor_called = variable;
}

char* GetGlobalVariable() {
  return g_was_global_constructor_called;
}
