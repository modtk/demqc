#include "strings.h"

// `FALSE` if `str` is nonfunctionally invalid
// `TRUE` if `str` is functionally valid
// `PARTIAL` if `str` is functional as a string, but not a meaningful one
int strvalid(char* str) {
  if(str == 0) {
    return FALSE;
  }
  if(str == "") {
    return PARTIAL;
  }
  if(str[0] == '\0') {
    return FALSE;
  }
  return TRUE;
}