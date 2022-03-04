#include<stdio.h>
#include"../ft_printf_bonus.h"

int	main(void)
{
	ft_printf("********************************************************************************\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*                              TEST : FT_PRINTF                                *\n");
	ft_printf("*                                 by jeonghak                                  *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*   format: formatted data for STDOUT                                          *\n");
	ft_printf("*   arg: argument                                                              *\n");
	ft_printf("*   result: STDOUT                                                             *\n");
	ft_printf("*   $: End of Line                                                             *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");


	ft_printf("\n\n");
    	ft_printf("********************************************************************************\n");
    	ft_printf("*                                                                              *\n");
	ft_printf("*                                specifier : c                                 *\n");
    	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");

	ft_printf("\n< argument : NULL >\n");
	ft_printf("format : %%c\t\targ : NULL\t\tresult : %c$\n", NULL);
	ft_printf("format : %%10c\t\targ : NULL\t\tresult : %10c$\n", NULL);
	ft_printf("format : %% 10c\t\targ : NULL\t\tresult : % 10c$\n", NULL);
	ft_printf("format : %%#10c\t\targ : NULL\t\tresult : %#10c$\n", NULL);
	ft_printf("format : %%010c\t\targ : NULL\t\tresult : %010c$\n", NULL);
	ft_printf("format : %%-10c\t\targ : NULL\t\tresult : %-10c$\n", NULL);
	ft_printf("format : %%+10c\t\targ : NULL\t\tresult : %+10c$\n", NULL);

	ft_printf("\n< precision : zero >\n");
	ft_printf("format : %%.0c\t\targ : 'a'\t\tresult : %.0c$\n", 'a');
	ft_printf("format : %%0.0c\t\targ : 'a'\t\tresult : %0.0c$\n", 'a');
	ft_printf("format : %%10.0c\t\targ : 'a'\t\tresult : %10.0c$\n", 'a');
	ft_printf("format : %% 10.0c\targ : 'a'\t\tresult : % 10.0c$\n", 'a');
	ft_printf("format : %%#10.0c\targ : 'a'\t\tresult : %#10.0c$\n", 'a');
	ft_printf("format : %%010.0c\targ : 'a'\t\tresult : %010.0c$\n", 'a');
	ft_printf("format : %%-10.0c\targ : 'a'\t\tresult : %-10.0c$\n", 'a');
	ft_printf("format : %%+10.0c\targ : 'a'\t\tresult : %+10.0c$\n", 'a');

	ft_printf("\n< argument & precision : NULL >\n");
	ft_printf("format : %%.0c\t\targ : NULL\t\tresult : %.0c$\n", NULL);
	ft_printf("format : %%0.0c\t\targ : NULL\t\tresult : %0.0c$\n", NULL);
	ft_printf("format : %%10.0c\t\targ : NULL\t\tresult : %10.0c$\n", NULL);
	ft_printf("format : %% 10.0c\targ : NULL\t\tresult : % 10.0c$\n", NULL);
	ft_printf("format : %%#10.0c\targ : NULL\t\tresult : %#10.0c$\n", NULL);
	ft_printf("format : %%010.0c\targ : NULL\t\tresult : %010.0c$\n", NULL);
	ft_printf("format : %%-10.0c\targ : NULL\t\tresult : %-10.0c$\n", NULL);
	ft_printf("format : %%+10.0c\targ : NULL\t\tresult : %+10.0c$\n", NULL);

	ft_printf("\n< width & precision >\n");
	ft_printf("format : %%5.10c\t\targ : 'a'\t\tresult : %5.10c$\n", 'a');
    	ft_printf("format : %%10.5c\t\targ : 'a'\t\tresult : %10.5c$\n", 'a');
	ft_printf("format : %%10.1c\t\targ : 'a'\t\tresult : %10.1c$\n", 'a');
	
	ft_printf("\n< width flags >\n");
	ft_printf("format : %%10 c\t\targ : 'a'\t\tresult : %10 c$\n", 'a');
	ft_printf("format : %%10#c\t\targ : 'a'\t\tresult : %10#c$\n", 'a');
	ft_printf("format : %%10-c\t\targ : 'a'\t\tresult : %10-c$\n", 'a');
	ft_printf("format : %%10+c\t\targ : 'a'\t\tresult : %10+c$\n", 'a');
	ft_printf("format : %%10 0c\t\targ : 'a'\t\tresult : %10 0c$\n", 'a');
	ft_printf("format : %%10#0c\t\targ : 'a'\t\tresult : %10#0c$\n", 'a');
	ft_printf("format : %%10-0c\t\targ : 'a'\t\tresult : %10-0c$\n", 'a');
	ft_printf("format : %%10+0c\t\targ : 'a'\t\tresult : %10+0c$\n", 'a');

	ft_printf("\n< precision flags >\n");
	ft_printf("format : %%.10c\t\targ : 'a'\t\tresult : %.10c$\n", 'a');
	ft_printf("format : %%.10 c\t\targ : 'a'\t\tresult : %.10 c$\n", 'a');
	ft_printf("format : %%.10#c\t\targ : 'a'\t\tresult : %.10#c$\n", 'a');
	ft_printf("format : %%.10-c\t\targ : 'a'\t\tresult : %.10-c$\n", 'a');
	ft_printf("format : %%.10+c\t\targ : 'a'\t\tresult : %.10+c$\n", 'a');
	ft_printf("format : %%.-10c\t\targ : 'a'\t\tresult : %.-10c$\n", 'a');
	ft_printf("format : %%.-+10c\targ : 'a'\t\tresult : %.-+10c$\n", 'a');
	ft_printf("format : %%.+-10c\targ : 'a'\t\tresult : %.+-10c$\n", 'a');
	ft_printf("format : %%.-+-10c\targ : 'a'\t\tresult : %.-+-10c$\n", 'a');
	ft_printf("format : %%.+-+10c\targ : 'a'\t\tresult : %.+-+10c$\n", 'a');
	ft_printf("format : %%.-+-+10c\targ : 'a'\t\tresult : %.-+-+10c$\n", 'a');
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : precision >\n");
	ft_printf("format : %%.*c\t\targ : 10, 'a'\t\tresult : %.*c$\n", 10, 'a');
	ft_printf("format : %%.*c\t\targ : -10, 'a'\t\tresult : %.*c$\n", -10, 'a');
	ft_printf("format : %%.*c\t\targ : -+10, 'a'\t\tresult : %.*c$\n", -+10, 'a');
	ft_printf("format : %%.*c\t\targ : +-10, 'a'\t\tresult : %.*c$\n", +-10, 'a');
	ft_printf("format : %%.*c\t\targ : -+-10, 'a'\tresult : %.*c$\n", -+-10, 'a');
	ft_printf("format : %%.*c\t\targ : +-+10, 'a'\tresult : %.*c$\n", +-+10, 'a');
	ft_printf("format : %%.*c\t\targ : -+-+10, 'a'\tresult : %.*c$\n", -+-+10, 'a');
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : width >\n");
    	ft_printf("format : %%*c\t\targ : 10, 'a'\t\tresult : %*c$\n", 10, 'a');
	ft_printf("format : %%*c\t\targ : -10, 'a'\t\tresult : %*c$\n", -10, 'a');
	ft_printf("format : %%*c\t\targ : -+10, 'a'\t\tresult : %*c$\n", -+10, 'a');
	ft_printf("format : %%*c\t\targ : +-10, 'a'\t\tresult : %*c$\n", +-10, 'a');
	ft_printf("format : %%*c\t\targ : -+-10, 'a'\tresult : %*c$\n", -+-10, 'a');
	ft_printf("format : %%*c\t\targ : +-+10, 'a'\tresult : %*c$\n", +-+10, 'a');
	ft_printf("format : %%*c\t\targ : -+-+10, 'a'\tresult : %*c$\n", -+-+10, 'a');
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< width & width >\n");
	ft_printf("format : %%6-10c\t\targ : 'a'\t\tresult : %6-10c$\n", 'a');
	ft_printf("format : %%6-10+c\targ : 'a'\t\tresult : %6-10+c$\n", 'a');
	ft_printf("format : %%6+10 0c\targ : 'a'\t\tresult : %6+10 0c$\n", 'a');
	ft_printf("format : %%10+6 0c\targ : 'a'\t\tresult : %10+6 0c$\n", 'a');
	ft_printf("format : %%6+10-20c\targ : 'a'\t\tresult : %6+10-20c$\n", 'a');
	ft_printf("format : %%6+20-10c\targ : 'a'\t\tresult : %6+20-10c$\n", 'a');
	ft_printf("format : %%20*c\t\targ : 10, 'a'\t\tresult : %20*c$\n", 10, 'a');
	ft_printf("format : %%20*6c\t\targ : 10, 'a'\t\tresult : %20*6c$\n", 10, 'a');
	
	ft_printf("\n< precision & width >\n");
	ft_printf("format : %%.6-10c\targ : 'a'\t\tresult : %.6-10c$\n", 'a');
    	ft_printf("format : %%.6-10+c\targ : 'a'\t\tresult : %.6-10+c$\n", 'a');
    	ft_printf("format : %%.6+10 0c\targ : 'a'\t\tresult : %.6+10 0c$\n", 'a');
    	ft_printf("format : %%.10+6 0c\targ : 'a'\t\tresult : %.10+6 0c$\n", 'a');
    	ft_printf("format : %%.6+10-20c\targ : 'a'\t\tresult : %.6+10-20c$\n", 'a');
	ft_printf("format : %%.6+20-10c\targ : 'a'\t\tresult : %.6+20-10c$\n", 'a');
	
	ft_printf("\n< precision & precision >\n");
    	ft_printf("format : %%.6-.10c\targ : 'a'\t\tresult : %.6-.10c$\n", 'a');
    	ft_printf("format : %%.6-.10+c\targ : 'a'\t\tresult : %.6-.10+c$\n", 'a');
    	ft_printf("format : %%.6+.10 0c\targ : 'a'\t\tresult : %.6+.10 0c$\n", 'a');
    	ft_printf("format : %%.10+.6 0c\targ : 'a'\t\tresult : %.10+.6 0c$\n", 'a');
    	ft_printf("format : %%.6+.10-.20c\targ : 'a'\t\tresult : %.6+.10-.20c$\n", 'a');
    	ft_printf("format : %%.6+.20-.10c\targ : 'a'\t\tresult : %.6+.20-.10c$\n", 'a');


	ft_printf("\n\n");
    	ft_printf("********************************************************************************\n");
   	ft_printf("*                                                                              *\n");
	ft_printf("*                                specifier : s                                 *\n");
    	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");

	ft_printf("\n< argument : NULL >\n");
	ft_printf("format : %%s\t\targ : NULL\t\tresult : %s$\n", NULL);
	ft_printf("format : %%10s\t\targ : NULL\t\tresult : %10s$\n", NULL);
	ft_printf("format : %% 10s\t\targ : NULL\t\tresult : % 10s$\n", NULL);
	ft_printf("format : %%#10s\t\targ : NULL\t\tresult : %#10s$\n", NULL);
	ft_printf("format : %%010s\t\targ : NULL\t\tresult : %010s$\n", NULL);
	ft_printf("format : %%-10s\t\targ : NULL\t\tresult : %-10s$\n", NULL);
	ft_printf("format : %%+10s\t\targ : NULL\t\tresult : %+10s$\n", NULL);

	ft_printf("\n< precision : zero >\n");
	ft_printf("format : %%.0s\t\targ : \"abcd\"\t\tresult : %.0s$\n", "abcd");
	ft_printf("format : %%0.0s\t\targ : \"abcd\"\t\tresult : %0.0s$\n", "abcd");
	ft_printf("format : %%10.0s\t\targ : \"abcd\"\t\tresult : %10.0s$\n", "abcd");
	ft_printf("format : %% 10.0s\targ : \"abcd\"\t\tresult : % 10.0s$\n", "abcd");
	ft_printf("format : %%#10.0s\targ : \"abcd\"\t\tresult : %#10.0s$\n", "abcd");
	ft_printf("format : %%010.0s\targ : \"abcd\"\t\tresult : %010.0s$\n", "abcd");
	ft_printf("format : %%-10.0s\targ : \"abcd\"\t\tresult : %-10.0s$\n", "abcd");
	ft_printf("format : %%+10.0s\targ : \"abcd\"\t\tresult : %+10.0s$\n", "abcd");

	ft_printf("\n< argument & precision : NULL >\n");
	ft_printf("format : %%.0s\t\targ : NULL\t\tresult : %.0s$\n", NULL);
	ft_printf("format : %%0.0s\t\targ : NULL\t\tresult : %0.0s$\n", NULL);
	ft_printf("format : %%10.0s\t\targ : NULL\t\tresult : %10.0s$\n", NULL);
	ft_printf("format : %% 10.0s\targ : NULL\t\tresult : % 10.0s$\n", NULL);
	ft_printf("format : %%#10.0s\targ : NULL\t\tresult : %#10.0s$\n", NULL);
	ft_printf("format : %%010.0s\targ : NULL\t\tresult : %010.0s$\n", NULL);
	ft_printf("format : %%-10.0s\targ : NULL\t\tresult : %-10.0s$\n", NULL);
	ft_printf("format : %%+10.0s\targ : NULL\t\tresult : %+10.0s$\n", NULL);

	ft_printf("\n< width & precision >\n");
	ft_printf("format : %%5.10s\t\targ : \"abcd\"\t\tresult : %5.10s$\n", "abcd");
    	ft_printf("format : %%10.5s\t\targ : \"abcd\"\t\tresult : %10.5s$\n", "abcd");
	ft_printf("format : %%10.2s\t\targ : \"abcd\"\t\tresult : %10.2s$\n", "abcd");
	
	ft_printf("\n< width flags >\n");
	ft_printf("format : %%10 s\t\targ : \"abcd\"\t\tresult : %10 s$\n", "abcd");
	ft_printf("format : %%10#s\t\targ : \"abcd\"\t\tresult : %10#s$\n", "abcd");
	ft_printf("format : %%10-s\t\targ : \"abcd\"\t\tresult : %10-s$\n", "abcd");
	ft_printf("format : %%10+s\t\targ : \"abcd\"\t\tresult : %10+s$\n", "abcd");
	ft_printf("format : %%10 0s\t\targ : \"abcd\"\t\tresult : %10 0s$\n", "abcd");
	ft_printf("format : %%10#0s\t\targ : \"abcd\"\t\tresult : %10#0s$\n", "abcd");
	ft_printf("format : %%10-0s\t\targ : \"abcd\"\t\tresult : %10-0s$\n", "abcd");
	ft_printf("format : %%10+0s\t\targ : \"abcd\"\t\tresult : %10+0s$\n", "abcd");

	ft_printf("\n< precision flags >\n");
	ft_printf("format : %%.10s\t\targ : \"abcd\"\t\tresult : %.10s$\n", "abcd");
	ft_printf("format : %%.10 s\t\targ : \"abcd\"\t\tresult : %.10 s$\n", "abcd");
	ft_printf("format : %%.10#s\t\targ : \"abcd\"\t\tresult : %.10#s$\n", "abcd");
	ft_printf("format : %%.10-s\t\targ : \"abcd\"\t\tresult : %.10-s$\n", "abcd");
	ft_printf("format : %%.10+s\t\targ : \"abcd\"\t\tresult : %.10+s$\n", "abcd");
	ft_printf("format : %%.-10s\t\targ : \"abcd\"\t\tresult : %.-10s$\n", "abcd");
	ft_printf("format : %%.-+10s\targ : \"abcd\"\t\tresult : %.-+10s$\n", "abcd");
	ft_printf("format : %%.+-10s\targ : \"abcd\"\t\tresult : %.+-10s$\n", "abcd");
	ft_printf("format : %%.-+-10s\targ : \"abcd\"\t\tresult : %.-+-10s$\n", "abcd");
	ft_printf("format : %%.+-+10s\targ : \"abcd\"\t\tresult : %.+-+10s$\n", "abcd");
	ft_printf("format : %%.-+-+10s\targ : \"abcd\"\t\tresult : %.-+-+10s$\n", "abcd");
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : precision >\n");
	ft_printf("format : %%.*s\t\targ : 10, \"abcd\"\tresult : %.*s$\n", 10, "abcd");
	ft_printf("format : %%.*s\t\targ : -10, \"abcd\"\tresult : %.*s$\n", -10, "abcd");
	ft_printf("format : %%.*s\t\targ : -+10, \"abcd\"\tresult : %.*s$\n", -+10, "abcd");
	ft_printf("format : %%.*s\t\targ : +-10, \"abcd\"\tresult : %.*s$\n", +-10, "abcd");
	ft_printf("format : %%.*s\t\targ : -+-10, \"abcd\"\tresult : %.*s$\n", -+-10, "abcd");
	ft_printf("format : %%.*s\t\targ : +-+10, \"abcd\"\tresult : %.*s$\n", +-+10, "abcd");
	ft_printf("format : %%.*s\t\targ : -+-+10, \"abcd\"\tresult : %.*s$\n", -+-+10, "abcd");
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : width >\n");
	ft_printf("format : %%*s\t\targ : 10, \"abcd\"\tresult : %*s$\n", 10, "abcd");
	ft_printf("format : %%*s\t\targ : -10, \"abcd\"\tresult : %*s$\n", -10, "abcd");
	ft_printf("format : %%*s\t\targ : -+10, \"abcd\"\tresult : %*s$\n", -+10, "abcd");
	ft_printf("format : %%*s\t\targ : +-10, \"abcd\"\tresult : %*s$\n", +-10, "abcd");
	ft_printf("format : %%*s\t\targ : -+-10, \"abcd\"\tresult : %*s$\n", -+-10, "abcd");
	ft_printf("format : %%*s\t\targ : +-+10, \"abcd\"\tresult : %*s$\n", +-+10, "abcd");
	ft_printf("format : %%*s\t\targ : -+-+10, \"abcd\"\tresult : %*s$\n", -+-+10, "abcd");
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< width & width >\n");
	ft_printf("format : %%6-10s\t\targ : \"abcd\"\t\tresult : %6-10s$\n", "abcd");
	ft_printf("format : %%6-10+s\targ : \"abcd\"\t\tresult : %6-10+s$\n", "abcd");
	ft_printf("format : %%6+10 0s\targ : \"abcd\"\t\tresult : %6+10 0s$\n", "abcd");
	ft_printf("format : %%10+6 0s\targ : \"abcd\"\t\tresult : %10+6 0s$\n", "abcd");
	ft_printf("format : %%6+10-20s\targ : \"abcd\"\t\tresult : %6+10-20s$\n", "abcd");
	ft_printf("format : %%6+20-10s\targ : \"abcd\"\t\tresult : %6+20-10s$\n", "abcd");
	ft_printf("format : %%20*s\t\targ : 10, \"abcd\"\tresult : %20*s$\n", 10, "abcd");	
	ft_printf("format : %%20*6s\t\targ : 10, \"abcd\"\tresult : %20*6s$\n", 10, "abcd");

	ft_printf("\n< precision & width >\n");
	ft_printf("format : %%.6-10s\targ : \"abcd\"\t\tresult : %.6-10s$\n", "abcd");
    	ft_printf("format : %%.6-10+s\targ : \"abcd\"\t\tresult : %.6-10+s$\n", "abcd");
    	ft_printf("format : %%.6+10 0s\targ : \"abcd\"\t\tresult : %.6+10 0s$\n", "abcd");
    	ft_printf("format : %%.10+6 0s\targ : \"abcd\"\t\tresult : %.10+6 0s$\n", "abcd");
    	ft_printf("format : %%.6+10-20s\targ : \"abcd\"\t\tresult : %.6+10-20s$\n", "abcd");
    	ft_printf("format : %%.6+20-10s\targ : \"abcd\"\t\tresult : %.6+20-10s$\n", "abcd");
	
	ft_printf("\n< precision & precision >\n");
    	ft_printf("format : %%.6-.10s\targ : \"abcd\"\t\tresult : %.6-.10s$\n", "abcd");
    	ft_printf("format : %%.6-.10+s\targ : \"abcd\"\t\tresult : %.6-.10+s$\n", "abcd");
    	ft_printf("format : %%.6+.10 0s\targ : \"abcd\"\t\tresult : %.6+.10 0s$\n", "abcd");
    	ft_printf("format : %%.10+.6 0s\targ : \"abcd\"\t\tresult : %.10+.6 0s$\n", "abcd");
    	ft_printf("format : %%.6+.10-.20s\targ : \"abcd\"\t\tresult : %.6+.10-.20s$\n", "abcd");
    	ft_printf("format : %%.6+.20-.10s\targ : \"abcd\"\t\tresult : %.6+.20-.10s$\n", "abcd");


	ft_printf("\n\n");
    	ft_printf("********************************************************************************\n");
    	ft_printf("*                                                                              *\n");
	ft_printf("*                                specifier : p                                 *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");

	ft_printf("\n< argument : NULL >\n");
	ft_printf("format : %%p\t\targ : NULL\t\tresult : %p$\n", NULL);
	ft_printf("format : %%0p\t\targ : NULL\t\tresult : %0p$\n", NULL);
	ft_printf("format : %%10p\t\targ : NULL\t\tresult : %10p$\n", NULL);
	ft_printf("format : %% 10p\t\targ : NULL\t\tresult : % 10p$\n", NULL);
	ft_printf("format : %%#10p\t\targ : NULL\t\tresult : %#10p$\n", NULL);	
	ft_printf("format : %%010p\t\targ : NULL\t\tresult : %010p$\n", NULL);
	ft_printf("format : %%-10p\t\targ : NULL\t\tresult : %-10p$\n", NULL);
	ft_printf("format : %%+10p\t\targ : NULL\t\tresult : %+10p$\n", NULL);

	ft_printf("\n< precision : zero >\n");
	ft_printf("format : %%.0p\t\targ : 1234\t\tresult : %.0p$\n", 1234);
	ft_printf("format : %%0.0p\t\targ : 1234\t\tresult : %0.0p$\n", 1234);
	ft_printf("format : %%10.0p\t\targ : 1234\t\tresult : %10.0p$\n", 1234);
	ft_printf("format : %% 10.0p\targ : 1234\t\tresult : % 10.0p$\n", 1234);
	ft_printf("format : %%#10.0p\targ : 1234\t\tresult : %#10.0p$\n", 1234);
	ft_printf("format : %%010.0p\targ : 1234\t\tresult : %010.0p$\n", 1234);
	ft_printf("format : %%-10.0p\targ : 1234\t\tresult : %-10.0p$\n", 1234);
	ft_printf("format : %%+10.0p\targ : 1234\t\tresult : %+10.0p$\n", 1234);

	ft_printf("\n< argument & precision : NULL >\n");
	ft_printf("format : %%.0p\t\targ : NULL\t\tresult : %.0p$\n", NULL);
	ft_printf("format : %%0.0p\t\targ : NULL\t\tresult : %0.0p$\n", NULL);
	ft_printf("format : %%10.0p\t\targ : NULL\t\tresult : %10.0p$\n", NULL);
	ft_printf("format : %% 10.0p\targ : NULL\t\tresult : % 10.0p$\n", NULL);
	ft_printf("format : %%#10.0p\targ : NULL\t\tresult : %#10.0p$\n", NULL);
	ft_printf("format : %%010.0p\targ : NULL\t\tresult : %010.0p$\n", NULL);
	ft_printf("format : %%-10.0p\targ : NULL\t\tresult : %-10.0p$\n", NULL);
	ft_printf("format : %%+10.0p\targ : NULL\t\tresult : %+10.0p$\n", NULL);

	ft_printf("\n< width & precision >\n");
	ft_printf("format : %%5.10p\t\targ : 1234\t\tresult : %5.10p$\n", 1234);
    	ft_printf("format : %%10.5p\t\targ : 1234\t\tresult : %10.5p$\n", 1234);
	ft_printf("format : %%10.2p\t\targ : 1234\t\tresult : %10.2p$\n", 1234);

	ft_printf("\n< width flags >\n");
	ft_printf("format : %%10 p\t\targ : 1234\t\tresult : %10 p$\n", 1234);
	ft_printf("format : %%10#p\t\targ : 1234\t\tresult : %10#p$\n", 1234);
	ft_printf("format : %%10-p\t\targ : 1234\t\tresult : %10-p$\n", 1234);
	ft_printf("format : %%10+p\t\targ : 1234\t\tresult : %10+p$\n", 1234);
	ft_printf("format : %%10 0p\t\targ : 1234\t\tresult : %10 0p$\n", 1234);
	ft_printf("format : %%10#0p\t\targ : 1234\t\tresult : %10#0p$\n", 1234);
	ft_printf("format : %%10-0p\t\targ : 1234\t\tresult : %10-0p$\n", 1234);
	ft_printf("format : %%10+0p\t\targ : 1234\t\tresult : %10+0p$\n", 1234);

	ft_printf("\n< precision flags >\n");
	ft_printf("format : %%.10p\t\targ : 1234\t\tresult : %.10p$\n", 1234);
	ft_printf("format : %%.10 p\t\targ : 1234\t\tresult : %.10 p$\n", 1234);
	ft_printf("format : %%.10#p\t\targ : 1234\t\tresult : %.10#p$\n", 1234);
	ft_printf("format : %%.10-p\t\targ : 1234\t\tresult : %.10-p$\n", 1234);
	ft_printf("format : %%.10+p\t\targ : 1234\t\tresult : %.10+p$\n", 1234);
	ft_printf("format : %%.-10p\t\targ : 1234\t\tresult : %.-10p$\n", 1234);
	ft_printf("format : %%.-+10p\targ : 1234\t\tresult : %.-+10p$\n", 1234);
	ft_printf("format : %%.+-10p\targ : 1234\t\tresult : %.+-10p$\n", 1234);
	ft_printf("format : %%.-+-10p\targ : 1234\t\tresult : %.-+-10p$\n", 1234);
	ft_printf("format : %%.+-+10p\targ : 1234\t\tresult : %.+-+10p$\n", 1234);
	ft_printf("format : %%.-+-+10p\targ : 1234\t\tresult : %.-+-+10p$\n", 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : precision >\n");
	ft_printf("format : %%.*p\t\targ : 10, 1234\t\tresult : %.*p$\n", 10, 1234);
	ft_printf("format : %%.*p\t\targ : -10, 1234\t\tresult : %.*p$\n", -10, 1234);
	ft_printf("format : %%.*p\t\targ : -+10, 1234\tresult : %.*p$\n", -+10, 1234);
	ft_printf("format : %%.*p\t\targ : +-10, 1234\tresult : %.*p$\n", +-10, 1234);
	ft_printf("format : %%.*p\t\targ : -+-10, 1234\tresult : %.*p$\n", -+-10, 1234);
	ft_printf("format : %%.*p\t\targ : +-+10, 1234\tresult : %.*p$\n", +-+10, 1234);
	ft_printf("format : %%.*p\t\targ : -+-+10, 1234\tresult : %.*p$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");


	ft_printf("\n< argument flags : width >\n");
    	ft_printf("format : %%*p\t\targ : 10, 1234\t\tresult : %*p$\n", 10, 1234);
	ft_printf("format : %%*p\t\targ : -10, 1234\t\tresult : %*p$\n", -10, 1234);
	ft_printf("format : %%*p\t\targ : -+10, 1234\tresult : %*p$\n", -+10, 1234);
	ft_printf("format : %%*p\t\targ : +-10, 1234\tresult : %*p$\n", +-10, 1234);
	ft_printf("format : %%*p\t\targ : -+-10, 1234\tresult : %*p$\n", -+-10, 1234);
	ft_printf("format : %%*p\t\targ : +-+10, 1234\tresult : %*p$\n", +-+10, 1234);
	ft_printf("format : %%*p\t\targ : -+-+10, 1234\tresult : %*p$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< width & width >\n");
	ft_printf("format : %%6-10p\t\targ : 1234\t\tresult : %6-10p$\n", 1234);
	ft_printf("format : %%6-10+p\targ : 1234\t\tresult : %6-10+p$\n", 1234);
	ft_printf("format : %%6+10 0p\targ : 1234\t\tresult : %6+10 0p$\n", 1234);
	ft_printf("format : %%10+6 0p\targ : 1234\t\tresult : %10+6 0p$\n", 1234);
	ft_printf("format : %%6+10-20p\targ : 1234\t\tresult : %6+10-20p$\n", 1234);
	ft_printf("format : %%6+20-10p\targ : 1234\t\tresult : %6+20-10p$\n", 1234);
	ft_printf("format : %%20*p\t\targ : 10, 1234\t\tresult : %20*p$\n", 10, 1234);
	ft_printf("format : %%20*6p\t\targ : 10, 1234\t\tresult : %20*6p$\n", 10, 1234);	

	ft_printf("\n< precision & width >\n");
	ft_printf("format : %%.6-10p\targ : 1234\t\tresult : %.6-10p$\n", 1234);
    	ft_printf("format : %%.6-10+p\targ : 1234\t\tresult : %.6-10+p$\n", 1234);
    	ft_printf("format : %%.6+10 0p\targ : 1234\t\tresult : %.6+10 0p$\n", 1234);
    	ft_printf("format : %%.10+6 0p\targ : 1234\t\tresult : %.10+6 0p$\n", 1234);
    	ft_printf("format : %%.6+10-20p\targ : 1234\t\tresult : %.6+10-20p$\n", 1234);
    	ft_printf("format : %%.6+20-10p\targ : 1234\t\tresult : %.6+20-10p$\n", 1234);
	
	ft_printf("\n< precision & precision >\n");
    	ft_printf("format : %%.6-.10p\targ : 1234\t\tresult : %.6-.10p$\n", 1234);
    	ft_printf("format : %%.6-.10+p\targ : 1234\t\tresult : %.6-.10+p$\n", 1234);
    	ft_printf("format : %%.6+.10 0p\targ : 1234\t\tresult : %.6+.10 0p$\n", 1234);
    	ft_printf("format : %%.10+.6 0p\targ : 1234\t\tresult : %.10+.6 0p$\n", 1234);
    	ft_printf("format : %%.6+.10-.20p\targ : 1234\t\tresult : %.6+.10-.20p$\n", 1234);
    	ft_printf("format : %%.6+.20-.10p\targ : 1234\t\tresult : %.6+.20-.10p$\n", 1234);
	
	ft_printf("\n< limits >\n");
	ft_printf("format : %%p\targ : -1\t\t\tresult : %p$\n", -1);
	ft_printf("format : %%p\targ : 18446744073709551615\tresult : %p$\n", 18446744073709551615);
	ft_printf("\n*** error: integer literal is too large(18446744073709551616)\n");

	ft_printf("\n\n");
	ft_printf("********************************************************************************\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*                               specifier : d                                  *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");

	ft_printf("\n< argument : NULL >\n");
	ft_printf("format : %%d\t\targ : NULL\t\tresult : %d$\n", NULL);
	ft_printf("format : %%0d\t\targ : NULL\t\tresult : %0d$\n", NULL);
	ft_printf("format : %%10d\t\targ : NULL\t\tresult : %10d$\n", NULL);
	ft_printf("format : %% 10d\t\targ : NULL\t\tresult : % 10d$\n", NULL);
	ft_printf("format : %%#10d\t\targ : NULL\t\tresult : %#10d$\n", NULL);	
	ft_printf("format : %%010d\t\targ : NULL\t\tresult : %010d$\n", NULL);
	ft_printf("format : %%-10d\t\targ : NULL\t\tresult : %-10d$\n", NULL);
	ft_printf("format : %%+10d\t\targ : NULL\t\tresult : %+10d$\n", NULL);

	ft_printf("\n< precision : zero >\n");
	ft_printf("format : %%.0d\t\targ : 1234\t\tresult : %.0d$\n", 1234);
	ft_printf("format : %%0.0d\t\targ : 1234\t\tresult : %0.0d$\n", 1234);
	ft_printf("format : %%10.0d\t\targ : 1234\t\tresult : %10.0d$\n", 1234);
	ft_printf("format : %% 10.0d\targ : 1234\t\tresult : % 10.0d$\n", 1234);
	ft_printf("format : %%#10.0d\targ : 1234\t\tresult : %#10.0d$\n", 1234);
	ft_printf("format : %%010.0d\targ : 1234\t\tresult : %010.0d$\n", 1234);
	ft_printf("format : %%-10.0d\targ : 1234\t\tresult : %-10.0d$\n", 1234);
	ft_printf("format : %%+10.0d\targ : 1234\t\tresult : %+10.0d$\n", 1234);

	ft_printf("\n< argument & precision : NULL >\n");
	ft_printf("format : %%.0d\t\targ : NULL\t\tresult : %.0d$\n", NULL);
	ft_printf("format : %%0.0d\t\targ : NULL\t\tresult : %0.0d$\n", NULL);
	ft_printf("format : %%10.0d\t\targ : NULL\t\tresult : %10.0d$\n", NULL);
	ft_printf("format : %% 10.0d\targ : NULL\t\tresult : % 10.0d$\n", NULL);
	ft_printf("format : %%#10.0d\targ : NULL\t\tresult : %#10.0d$\n", NULL);
	ft_printf("format : %%010.0d\targ : NULL\t\tresult : %010.0d$\n", NULL);
	ft_printf("format : %%-10.0d\targ : NULL\t\tresult : %-10.0d$\n", NULL);
	ft_printf("format : %%+10.0d\targ : NULL\t\tresult : %+10.0d$\n", NULL);

	ft_printf("\n< width & precision >\n");
	ft_printf("format : %%5.10d\t\targ : 1234\t\tresult : %5.10d$\n", 1234);
    	ft_printf("format : %%10.5d\t\targ : 1234\t\tresult : %10.5d$\n", 1234);
	ft_printf("format : %%10.2d\t\targ : 1234\t\tresult : %10.2d$\n", 1234);

	ft_printf("\n< width flags >\n");
	ft_printf("format : %%10 d\t\targ : 1234\t\tresult : %10 d$\n", 1234);
	ft_printf("format : %%10#d\t\targ : 1234\t\tresult : %10#d$\n", 1234);
	ft_printf("format : %%10-d\t\targ : 1234\t\tresult : %10-d$\n", 1234);
	ft_printf("format : %%10+d\t\targ : 1234\t\tresult : %10+d$\n", 1234);
	ft_printf("format : %%10 0d\t\targ : 1234\t\tresult : %10 0d$\n", 1234);
	ft_printf("format : %%10#0d\t\targ : 1234\t\tresult : %10#0d$\n", 1234);
	ft_printf("format : %%10-0d\t\targ : 1234\t\tresult : %10-0d$\n", 1234);
	ft_printf("format : %%10+0d\t\targ : 1234\t\tresult : %10+0d$\n", 1234);

	ft_printf("\n< precision flags >\n");
	ft_printf("format : %%.10d\t\targ : 1234\t\tresult : %.10d$\n", 1234);
	ft_printf("format : %%.10 d\t\targ : 1234\t\tresult : %.10 d$\n", 1234);
	ft_printf("format : %%.10#d\t\targ : 1234\t\tresult : %.10#d$\n", 1234);
	ft_printf("format : %%.10-d\t\targ : 1234\t\tresult : %.10-d$\n", 1234);
	ft_printf("format : %%.10+d\t\targ : 1234\t\tresult : %.10+d$\n", 1234);
	ft_printf("format : %%.-10d\t\targ : 1234\t\tresult : %.-10d$\n", 1234);
	ft_printf("format : %%.-+10d\targ : 1234\t\tresult : %.-+10d$\n", 1234);
	ft_printf("format : %%.+-10d\targ : 1234\t\tresult : %.+-10d$\n", 1234);
	ft_printf("format : %%.-+-10d\targ : 1234\t\tresult : %.-+-10d$\n", 1234);
	ft_printf("format : %%.+-+10d\targ : 1234\t\tresult : %.+-+10d$\n", 1234);
	ft_printf("format : %%.-+-+10d\targ : 1234\t\tresult : %.-+-+10d$\n", 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : precision >\n");
	ft_printf("format : %%.*d\t\targ : 10, 1234\t\tresult : %.*d$\n", 10, 1234);
	ft_printf("format : %%.*d\t\targ : -10, 1234\t\tresult : %.*d$\n", -10, 1234);
	ft_printf("format : %%.*d\t\targ : -+10, 1234\tresult : %.*d$\n", -+10, 1234);
	ft_printf("format : %%.*d\t\targ : +-10, 1234\tresult : %.*d$\n", +-10, 1234);
	ft_printf("format : %%.*d\t\targ : -+-10, 1234\tresult : %.*d$\n", -+-10, 1234);
	ft_printf("format : %%.*d\t\targ : +-+10, 1234\tresult : %.*d$\n", +-+10, 1234);
	ft_printf("format : %%.*d\t\targ : -+-+10, 1234\tresult : %.*d$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : width >\n");
    	ft_printf("format : %%*d\t\targ : 10, 1234\t\tresult : %*d$\n", 10, 1234);
	ft_printf("format : %%*d\t\targ : -10, 1234\t\tresult : %*d$\n", -10, 1234);
	ft_printf("format : %%*d\t\targ : -+10, 1234\tresult : %*d$\n", -+10, 1234);
	ft_printf("format : %%*d\t\targ : +-10, 1234\tresult : %*d$\n", +-10, 1234);
	ft_printf("format : %%*d\t\targ : -+-10, 1234\tresult : %*d$\n", -+-10, 1234);
	ft_printf("format : %%*d\t\targ : +-+10, 1234\tresult : %*d$\n", +-+10, 1234);
	ft_printf("format : %%*d\t\targ : -+-+10, 1234\tresult : %*d$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< width & width >\n");
	ft_printf("format : %%6-10d\t\targ : 1234\t\tresult : %6-10d$\n", 1234);
	ft_printf("format : %%6-10+d\targ : 1234\t\tresult : %6-10+d$\n", 1234);
	ft_printf("format : %%6+10 0d\targ : 1234\t\tresult : %6+10 0d$\n", 1234);
	ft_printf("format : %%10+6 0d\targ : 1234\t\tresult : %10+6 0d$\n", 1234);
	ft_printf("format : %%6+10-20d\targ : 1234\t\tresult : %6+10-20d$\n", 1234);
	ft_printf("format : %%6+20-10d\targ : 1234\t\tresult : %6+20-10d$\n", 1234);
	ft_printf("format : %%20*d\t\targ : 10, 1234\t\tresult : %20*d$\n", 10, 1234);
	ft_printf("format : %%20*6d\t\targ : 10, 1234\t\tresult : %20*6d$\n", 10, 1234);	

	ft_printf("\n< precision & width >\n");
	ft_printf("format : %%.6-10d\targ : 1234\t\tresult : %.6-10d$\n", 1234);
    	ft_printf("format : %%.6-10+d\targ : 1234\t\tresult : %.6-10+d$\n", 1234);
    	ft_printf("format : %%.6+10 0d\targ : 1234\t\tresult : %.6+10 0d$\n", 1234);
    	ft_printf("format : %%.10+6 0d\targ : 1234\t\tresult : %.10+6 0d$\n", 1234);
    	ft_printf("format : %%.6+10-20d\targ : 1234\t\tresult : %.6+10-20d$\n", 1234);
    	ft_printf("format : %%.6+20-10d\targ : 1234\t\tresult : %.6+20-10d$\n", 1234);
	
	ft_printf("\n< precision & precision >\n");
    	ft_printf("format : %%.6-.10d\targ : 1234\t\tresult : %.6-.10d$\n", 1234);
    	ft_printf("format : %%.6-.10+d\targ : 1234\t\tresult : %.6-.10+d$\n", 1234);
    	ft_printf("format : %%.6+.10 0d\targ : 1234\t\tresult : %.6+.10 0d$\n", 1234);
    	ft_printf("format : %%.10+.6 0d\targ : 1234\t\tresult : %.10+.6 0d$\n", 1234);
    	ft_printf("format : %%.6+.10-.20d\targ : 1234\t\tresult : %.6+.10-.20d$\n", 1234);
    	ft_printf("format : %%.6+.20-.10d\targ : 1234\t\tresult : %.6+.20-.10d$\n", 1234);



	ft_printf("\n\n");
	ft_printf("********************************************************************************\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*                               specifier : u                                  *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");

	ft_printf("\n< argument : NULL >\n");
	ft_printf("format : %%u\t\targ : NULL\t\tresult : %u$\n", NULL);
	ft_printf("format : %%0u\t\targ : NULL\t\tresult : %0u$\n", NULL);
	ft_printf("format : %%10u\t\targ : NULL\t\tresult : %10u$\n", NULL);
	ft_printf("format : %% 10u\t\targ : NULL\t\tresult : % 10u$\n", NULL);
	ft_printf("format : %%#10u\t\targ : NULL\t\tresult : %#10u$\n", NULL);	
	ft_printf("format : %%010u\t\targ : NULL\t\tresult : %010u$\n", NULL);
	ft_printf("format : %%-10u\t\targ : NULL\t\tresult : %-10u$\n", NULL);
	ft_printf("format : %%+10u\t\targ : NULL\t\tresult : %+10u$\n", NULL);

	ft_printf("\n< precision : zero >\n");
	ft_printf("format : %%.0u\t\targ : 1234\t\tresult : %.0u$\n", 1234);
	ft_printf("format : %%0.0u\t\targ : 1234\t\tresult : %0.0u$\n", 1234);
	ft_printf("format : %%10.0u\t\targ : 1234\t\tresult : %10.0u$\n", 1234);
	ft_printf("format : %% 10.0u\targ : 1234\t\tresult : % 10.0u$\n", 1234);
	ft_printf("format : %%#10.0u\targ : 1234\t\tresult : %#10.0u$\n", 1234);
	ft_printf("format : %%010.0u\targ : 1234\t\tresult : %010.0u$\n", 1234);
	ft_printf("format : %%-10.0u\targ : 1234\t\tresult : %-10.0u$\n", 1234);
	ft_printf("format : %%+10.0u\targ : 1234\t\tresult : %+10.0u$\n", 1234);

	ft_printf("\n< argument & precision : NULL >\n");
	ft_printf("format : %%.0u\t\targ : NULL\t\tresult : %.0u$\n", NULL);
	ft_printf("format : %%0.0u\t\targ : NULL\t\tresult : %0.0u$\n", NULL);
	ft_printf("format : %%10.0u\t\targ : NULL\t\tresult : %10.0u$\n", NULL);
	ft_printf("format : %% 10.0u\targ : NULL\t\tresult : % 10.0u$\n", NULL);
	ft_printf("format : %%#10.0u\targ : NULL\t\tresult : %#10.0u$\n", NULL);
	ft_printf("format : %%010.0u\targ : NULL\t\tresult : %010.0u$\n", NULL);
	ft_printf("format : %%-10.0u\targ : NULL\t\tresult : %-10.0u$\n", NULL);
	ft_printf("format : %%+10.0u\targ : NULL\t\tresult : %+10.0u$\n", NULL);

	ft_printf("\n< width & precision >\n");
	ft_printf("format : %%5.10u\t\targ : 1234\t\tresult : %5.10u$\n", 1234);
    	ft_printf("format : %%10.5u\t\targ : 1234\t\tresult : %10.5u$\n", 1234);
	ft_printf("format : %%10.2u\t\targ : 1234\t\tresult : %10.2u$\n", 1234);

	ft_printf("\n< width flags >\n");
	ft_printf("format : %%10 u\t\targ : 1234\t\tresult : %10 u$\n", 1234);
	ft_printf("format : %%10#u\t\targ : 1234\t\tresult : %10#u$\n", 1234);
	ft_printf("format : %%10-u\t\targ : 1234\t\tresult : %10-u$\n", 1234);
	ft_printf("format : %%10+u\t\targ : 1234\t\tresult : %10+u$\n", 1234);
	ft_printf("format : %%10 0u\t\targ : 1234\t\tresult : %10 0u$\n", 1234);
	ft_printf("format : %%10#0u\t\targ : 1234\t\tresult : %10#0u$\n", 1234);
	ft_printf("format : %%10-0u\t\targ : 1234\t\tresult : %10-0u$\n", 1234);
	ft_printf("format : %%10+0u\t\targ : 1234\t\tresult : %10+0u$\n", 1234);

	ft_printf("\n< precision flags >\n");
	ft_printf("format : %%.10u\t\targ : 1234\t\tresult : %.10u$\n", 1234);
	ft_printf("format : %%.10 u\t\targ : 1234\t\tresult : %.10 u$\n", 1234);
	ft_printf("format : %%.10#u\t\targ : 1234\t\tresult : %.10#u$\n", 1234);
	ft_printf("format : %%.10-u\t\targ : 1234\t\tresult : %.10-u$\n", 1234);
	ft_printf("format : %%.10+u\t\targ : 1234\t\tresult : %.10+u$\n", 1234);
	ft_printf("format : %%.-10u\t\targ : 1234\t\tresult : %.-10u$\n", 1234);
	ft_printf("format : %%.-+10u\targ : 1234\t\tresult : %.-+10u$\n", 1234);
	ft_printf("format : %%.+-10u\targ : 1234\t\tresult : %.+-10u$\n", 1234);
	ft_printf("format : %%.-+-10u\targ : 1234\t\tresult : %.-+-10u$\n", 1234);
	ft_printf("format : %%.+-+10u\targ : 1234\t\tresult : %.+-+10u$\n", 1234);
	ft_printf("format : %%.-+-+10u\targ : 1234\t\tresult : %.-+-+10u$\n", 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : precision >\n");
	ft_printf("format : %%.*u\t\targ : 10, 1234\t\tresult : %.*u$\n", 10, 1234);
	ft_printf("format : %%.*u\t\targ : -10, 1234\t\tresult : %.*u$\n", -10, 1234);
	ft_printf("format : %%.*u\t\targ : -+10, 1234\tresult : %.*u$\n", -+10, 1234);
	ft_printf("format : %%.*u\t\targ : +-10, 1234\tresult : %.*u$\n", +-10, 1234);
	ft_printf("format : %%.*u\t\targ : -+-10, 1234\tresult : %.*u$\n", -+-10, 1234);
	ft_printf("format : %%.*u\t\targ : +-+10, 1234\tresult : %.*u$\n", +-+10, 1234);
	ft_printf("format : %%.*u\t\targ : -+-+10, 1234\tresult : %.*u$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : width >\n");
	ft_printf("format : %%*u\t\targ : -10, 1234\t\tresult : %*u$\n", -10, 1234);
    	ft_printf("format : %%*u\t\targ : 10, 1234\t\tresult : %*u$\n", 10, 1234);
	ft_printf("format : %%*u\t\targ : -+10, 1234\tresult : %*u$\n", -+10, 1234);
	ft_printf("format : %%*u\t\targ : +-10, 1234\tresult : %*u$\n", +-10, 1234);
	ft_printf("format : %%*u\t\targ : -+-10, 1234\tresult : %*u$\n", -+-10, 1234);
	ft_printf("format : %%*u\t\targ : +-+10, 1234\tresult : %*u$\n", +-+10, 1234);
	ft_printf("format : %%*u\t\targ : -+-+10, 1234\tresult : %*u$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< width & width >\n");
	ft_printf("format : %%6-10u\t\targ : 1234\t\tresult : %6-10u$\n", 1234);
	ft_printf("format : %%6-10+u\targ : 1234\t\tresult : %6-10+u$\n", 1234);
	ft_printf("format : %%6+10 0u\targ : 1234\t\tresult : %6+10 0u$\n", 1234);
	ft_printf("format : %%10+6 0u\targ : 1234\t\tresult : %10+6 0u$\n", 1234);
	ft_printf("format : %%6+10-20u\targ : 1234\t\tresult : %6+10-20u$\n", 1234);
	ft_printf("format : %%6+20-10u\targ : 1234\t\tresult : %6+20-10u$\n", 1234);
	ft_printf("format : %%20*u\t\targ : 10, 1234\t\tresult : %20*u$\n", 10, 1234);
	ft_printf("format : %%20*6u\t\targ : 10, 1234\t\tresult : %20*6u$\n", 10, 1234);	

	ft_printf("\n< precision & width >\n");
	ft_printf("format : %%.6-10u\targ : 1234\t\tresult : %.6-10u$\n", 1234);
    	ft_printf("format : %%.6-10+u\targ : 1234\t\tresult : %.6-10+u$\n", 1234);
    	ft_printf("format : %%.6+10 0u\targ : 1234\t\tresult : %.6+10 0u$\n", 1234);
    	ft_printf("format : %%.10+6 0u\targ : 1234\t\tresult : %.10+6 0u$\n", 1234);
    	ft_printf("format : %%.6+10-20u\targ : 1234\t\tresult : %.6+10-20u$\n", 1234);
    	ft_printf("format : %%.6+20-10u\targ : 1234\t\tresult : %.6+20-10u$\n", 1234);
	
	ft_printf("\n< precision & precision >\n");
    	ft_printf("format : %%.6-.10u\targ : 1234\t\tresult : %.6-.10u$\n", 1234);
    	ft_printf("format : %%.6-.10+u\targ : 1234\t\tresult : %.6-.10+u$\n", 1234);
    	ft_printf("format : %%.6+.10 0u\targ : 1234\t\tresult : %.6+.10 0u$\n", 1234);
    	ft_printf("format : %%.10+.6 0u\targ : 1234\t\tresult : %.10+.6 0u$\n", 1234);
    	ft_printf("format : %%.6+.10-.20u\targ : 1234\t\tresult : %.6+.10-.20u$\n", 1234);
    	ft_printf("format : %%.6+.20-.10u\targ : 1234\t\tresult : %.6+.20-.10u$\n", 1234);

	ft_printf("\n< limits >\n");
	ft_printf("format : %%u\t\targ : -1\t\tresult : %u$\n", -1);

	ft_printf("\n\n");
	ft_printf("********************************************************************************\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*                               specifier : x, X                               *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");

	ft_printf("\n< argument : NULL >\n");
	ft_printf("format : %%x\t\targ : NULL\t\tresult : %x$\n", NULL);
	ft_printf("format : %%0x\t\targ : NULL\t\tresult : %0x$\n", NULL);
	ft_printf("format : %%10x\t\targ : NULL\t\tresult : %10x$\n", NULL);
	ft_printf("format : %% 10x\t\targ : NULL\t\tresult : % 10x$\n", NULL);
	ft_printf("format : %%#10x\t\targ : NULL\t\tresult : %#10x$\n", NULL);	
	ft_printf("format : %%010x\t\targ : NULL\t\tresult : %010x$\n", NULL);
	ft_printf("format : %%-10x\t\targ : NULL\t\tresult : %-10x$\n", NULL);
	ft_printf("format : %%+10x\t\targ : NULL\t\tresult : %+10x$\n", NULL);

	ft_printf("\n< precision : zero >\n");
	ft_printf("format : %%.0x\t\targ : 1234\t\tresult : %.0x$\n", 1234);
	ft_printf("format : %%0.0x\t\targ : 1234\t\tresult : %0.0x$\n", 1234);
	ft_printf("format : %%10.0x\t\targ : 1234\t\tresult : %10.0x$\n", 1234);
	ft_printf("format : %% 10.0x\targ : 1234\t\tresult : % 10.0x$\n", 1234);
	ft_printf("format : %%#10.0x\targ : 1234\t\tresult : %#10.0x$\n", 1234);
	ft_printf("format : %%010.0x\targ : 1234\t\tresult : %010.0x$\n", 1234);
	ft_printf("format : %%-10.0x\targ : 1234\t\tresult : %-10.0x$\n", 1234);
	ft_printf("format : %%+10.0x\targ : 1234\t\tresult : %+10.0x$\n", 1234);

	ft_printf("\n< argument & precision : NULL >\n");
	ft_printf("format : %%.0x\t\targ : NULL\t\tresult : %.0x$\n", NULL);
	ft_printf("format : %%0.0x\t\targ : NULL\t\tresult : %0.0x$\n", NULL);
	ft_printf("format : %%10.0x\t\targ : NULL\t\tresult : %10.0x$\n", NULL);
	ft_printf("format : %% 10.0x\targ : NULL\t\tresult : % 10.0x$\n", NULL);
	ft_printf("format : %%#10.0x\targ : NULL\t\tresult : %#10.0x$\n", NULL);
	ft_printf("format : %%010.0x\targ : NULL\t\tresult : %010.0x$\n", NULL);
	ft_printf("format : %%-10.0x\targ : NULL\t\tresult : %-10.0x$\n", NULL);
	ft_printf("format : %%+10.0x\targ : NULL\t\tresult : %+10.0x$\n", NULL);

	ft_printf("\n< width & precision >\n");
	ft_printf("format : %%5.10x\t\targ : 1234\t\tresult : %5.10x$\n", 1234);
    	ft_printf("format : %%10.5x\t\targ : 1234\t\tresult : %10.5x$\n", 1234);
	ft_printf("format : %%10.2x\t\targ : 1234\t\tresult : %10.2x$\n", 1234);

	ft_printf("\n< width flags >\n");
	ft_printf("format : %%10 x\t\targ : 1234\t\tresult : %10 x$\n", 1234);
	ft_printf("format : %%10#x\t\targ : 1234\t\tresult : %10#x$\n", 1234);
	ft_printf("format : %%10-x\t\targ : 1234\t\tresult : %10-x$\n", 1234);
	ft_printf("format : %%10+x\t\targ : 1234\t\tresult : %10+x$\n", 1234);
	ft_printf("format : %%10 0x\t\targ : 1234\t\tresult : %10 0x$\n", 1234);
	ft_printf("format : %%10#0x\t\targ : 1234\t\tresult : %10#0x$\n", 1234);
	ft_printf("format : %%10-0x\t\targ : 1234\t\tresult : %10-0x$\n", 1234);
	ft_printf("format : %%10+0x\t\targ : 1234\t\tresult : %10+0x$\n", 1234);

	ft_printf("\n< precision flags >\n");
	ft_printf("format : %%.10x\t\targ : 1234\t\tresult : %.10x$\n", 1234);
	ft_printf("format : %%.10 x\t\targ : 1234\t\tresult : %.10 x$\n", 1234);
	ft_printf("format : %%.10#x\t\targ : 1234\t\tresult : %.10#x$\n", 1234);
	ft_printf("format : %%.10-x\t\targ : 1234\t\tresult : %.10-x$\n", 1234);
	ft_printf("format : %%.10+x\t\targ : 1234\t\tresult : %.10+x$\n", 1234);
	ft_printf("format : %%.-10x\t\targ : 1234\t\tresult : %.-10x$\n", 1234);
	ft_printf("format : %%.-+10x\targ : 1234\t\tresult : %.-+10x$\n", 1234);
	ft_printf("format : %%.+-10x\targ : 1234\t\tresult : %.+-10x$\n", 1234);
	ft_printf("format : %%.-+-10x\targ : 1234\t\tresult : %.-+-10x$\n", 1234);
	ft_printf("format : %%.+-+10x\targ : 1234\t\tresult : %.+-+10x$\n", 1234);
	ft_printf("format : %%.-+-+10x\targ : 1234\t\tresult : %.-+-+10x$\n", 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");


	ft_printf("\n< argument flags : precision >\n");
	ft_printf("format : %%.*x\t\targ : 10, 1234\t\tresult : %.*x$\n", 10, 1234);
	ft_printf("format : %%.*x\t\targ : -10, 1234\t\tresult : %.*x$\n", -10, 1234);
	ft_printf("format : %%.*x\t\targ : -+10, 1234\tresult : %.*x$\n", -+10, 1234);
	ft_printf("format : %%.*x\t\targ : +-10, 1234\tresult : %.*x$\n", +-10, 1234);
	ft_printf("format : %%.*x\t\targ : -+-10, 1234\tresult : %.*x$\n", -+-10, 1234);
	ft_printf("format : %%.*x\t\targ : +-+10, 1234\tresult : %.*x$\n", +-+10, 1234);
	ft_printf("format : %%.*x\t\targ : -+-+10, 1234\tresult : %.*x$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< argument flags : width >\n");
    	ft_printf("format : %%*x\t\targ : 10, 1234\t\tresult : %*x$\n", 10, 1234);
	ft_printf("format : %%*x\t\targ : -10, 1234\t\tresult : %*x$\n", -10, 1234);
	ft_printf("format : %%*x\t\targ : -+10, 1234\tresult : %*x$\n", -+10, 1234);
	ft_printf("format : %%*x\t\targ : +-10, 1234\tresult : %*x$\n", +-10, 1234);
	ft_printf("format : %%*x\t\targ : -+-10, 1234\tresult : %*x$\n", -+-10, 1234);
	ft_printf("format : %%*x\t\targ : +-+10, 1234\tresult : %*x$\n", +-+10, 1234);
	ft_printf("format : %%*x\t\targ : -+-+10, 1234\tresult : %*x$\n", -+-+10, 1234);
	ft_printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	ft_printf("\n< width & width >\n");
	ft_printf("format : %%6-10x\t\targ : 1234\t\tresult : %6-10x$\n", 1234);
	ft_printf("format : %%6-10+x\targ : 1234\t\tresult : %6-10+x$\n", 1234);
	ft_printf("format : %%6+10 0x\targ : 1234\t\tresult : %6+10 0x$\n", 1234);
	ft_printf("format : %%10+6 0x\targ : 1234\t\tresult : %10+6 0x$\n", 1234);
	ft_printf("format : %%6+10-20x\targ : 1234\t\tresult : %6+10-20x$\n", 1234);
	ft_printf("format : %%6+20-10x\targ : 1234\t\tresult : %6+20-10x$\n", 1234);
	ft_printf("format : %%20*x\t\targ : 10, 1234\t\tresult : %20*x$\n", 10, 1234);	
	ft_printf("format : %%20*6x\t\targ : 10, 1234\t\tresult : %20*6x$\n", 10, 1234);

	ft_printf("\n< precision & width >\n");
	ft_printf("format : %%.6-10d\targ : 1234\t\tresult : %.6-10x$\n", 1234);
    	ft_printf("format : %%.6-10+x\targ : 1234\t\tresult : %.6-10+x$\n", 1234);
    	ft_printf("format : %%.6+10 0x\targ : 1234\t\tresult : %.6+10 0x$\n", 1234);
    	ft_printf("format : %%.10+6 0x\targ : 1234\t\tresult : %.10+6 0x$\n", 1234);
    	ft_printf("format : %%.6+10-20x\targ : 1234\t\tresult : %.6+10-20x$\n", 1234);
    	ft_printf("format : %%.6+20-10x\targ : 1234\t\tresult : %.6+20-10x$\n", 1234);
	
	ft_printf("\n< precision & precision >\n");
    	ft_printf("format : %%.6-.10x\targ : 1234\t\tresult : %.6-.10x$\n", 1234);
    	ft_printf("format : %%.6-.10+x\targ : 1234\t\tresult : %.6-.10+x$\n", 1234);
    	ft_printf("format : %%.6+.10 0x\targ : 1234\t\tresult : %.6+.10 0x$\n", 1234);
    	ft_printf("format : %%.10+.6 0x\targ : 1234\t\tresult : %.10+.6 0x$\n", 1234);
    	ft_printf("format : %%.6+.10-.20x\targ : 1234\t\tresult : %.6+.10-.20x$\n", 1234);
    	ft_printf("format : %%.6+.20-.10x\targ : 1234\t\tresult : %.6+.20-.10x$\n", 1234);
	
	ft_printf("\n< limits >\n");
	ft_printf("format : %%x\t\targ : -1\t\tresult : %x$\n", -1);

	ft_printf("\n\n");
	ft_printf("********************************************************************************\n");
	ft_printf("*                                                                              *\n");
	ft_printf("*                               return value                                   *\n");
	ft_printf("*                                                                              *\n");
	ft_printf("********************************************************************************\n");

	ft_printf("arg : ft_printf(\"%%\")\t\t\t\treturn value : %d$\n", ft_printf("%"));
	ft_printf("\narg : ft_printf(\"ab%%\")\t\t\t\treturn value : %d$\n", ft_printf("ab%"));
	ft_printf("\narg : ft_printf(\"ab%%b\")\t\t\t\treturn value : %d$\n", ft_printf("ab%b"));
	ft_printf("\narg : ft_printf(\"ab%%bd\", 1)\t\t\treturn value : %d$\n", ft_printf("ab%bd", 1));
	ft_printf("\narg : ft_printf(\"%%2147483647\")\t\t\treturn value : %d$\n", ft_printf("%2147483647"));
	ft_printf("\narg : ft_printf(\"%%2147483647b\")\t\t\treturn value : %d$\n", ft_printf("%2147483647b"));
	ft_printf("\narg : ft_printf(\"%%2147483647d\", 1)\t\treturn value : %d$\n", ft_printf("%2147483647d", 1));
	ft_printf("\narg : ft_printf(\"%%.2147483647d\", 1)\t\treturn value : %d$\n", ft_printf("%.2147483647d", 1));
	ft_printf("\narg : ft_printf(\"%%.2147483647s\", 0)\t\treturn value : %d$\n", ft_printf("%.2147483647s", 0));
	
	
	ft_printf("\n\n\n");
	return 0;
}
