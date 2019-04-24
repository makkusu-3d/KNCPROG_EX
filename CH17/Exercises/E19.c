/**
 * Write a function that, when given a string as its
 * argument, searches the following array of structures
 * for a matching command name, then calls the function
 * associated with the name.
 */

 struct {
     char *cmd_name;
     void (*cmd_pointer)(void);
 } file_cmd[] =
  {{"new",          new_cmd},
   {"open",         open_cmd},
   {"close",        close_cmd},
   {"close all",    close_all_cmd},
   {"save",         save_cmd},
   {"save as",      save_as_cmd},
   {"save all",     save_all_cmd},
   {"print",        print_cmd},
   {"exit",         exit_cmd}
 };

void call_function(char* string_arg) {
    for(i = 0; i < 9; i++) {
        if ((strcmp(file_cmd[i]->cmd_name,string_arg) == 0) {
            (*file_cmd[i]->cmd_pointer)();
        }
    }
}
