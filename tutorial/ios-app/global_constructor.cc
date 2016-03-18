char* g_was_global_constructor_called = "Global constructor was not called";

class GlobalConstructor {
 public:
  GlobalConstructor() {
    g_was_global_constructor_called = "Global constructor was called!";
  }
};

GlobalConstructor g_my_unreferenced_global;
