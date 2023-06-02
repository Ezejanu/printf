	     int i;
            select selects[] = {
                {'c', fun_c},
                {'s', fun_s},
               /** {'d', fun_id},
                {'i', fun_id},*/
                {'b', fun_b},
                {'u', fun_u},
                {'o', fun_o},
                {'x', fun_x},
                {'X', fun_X},
                {'\0', NULL}};

            for (i = 0; selects[i].letter != '\0'; i++)
            {
                if (*format == selects[i].letter)
                {
                    count += select[i].p(args);
                    break;
                }
	    }
