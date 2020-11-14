#include "state.h"
#include "utils\readinput.h"


class Interface
{
    public:
      Interface();
      void list_cards(STATE* SYSTEM_STATE);
      Card* search_id(STATE* SYSTEM_STATE);
      void change_card_access(STATE* SYSTEM_STATE);
      int admin_menu();

      void send_card(STATE* SYSTEM_STATE);
      void invalid_input();
      bool add_new_card();
    private:
      ReadInput Scanner;
};