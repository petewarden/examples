#ifndef INCLUDE_GLOBAL_VARIABLE_H
#define INCLUDE_GLOBAL_VARIABLE_H

#ifdef __cplusplus
extern "C" {
#endif
void SetGlobalVariable(char* variable);
char* GetGlobalVariable();
#ifdef __cplusplus
}
#endif

#endif  // INCLUDE_GLOBAL_VARIABLE_H
