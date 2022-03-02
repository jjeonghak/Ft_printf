#include<stdio.h>

int	main(void)
{
	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                                TEST : PRINTF                                 *\n");
	printf("*                             	  by jeonghak                                  *\n");
	printf("*                                                                              *\n");
	printf("*                                                                              *\n");
	printf("*                                                                              *\n");
	printf("*   format: formatted data for STDOUT                                          *\n");
	printf("*   arg: argument                                                              *\n");
	printf("*   result: STDOUT                                                             *\n");
	printf("*   $: End of Line                                                             *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");


	printf("\n\n");
    	printf("********************************************************************************\n");
    	printf("*                                                                              *\n");
	printf("*                                specifier : c                                 *\n");
    	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("format : %%c\t\targ : NULL\t\tresult : %c$\n", NULL);
	printf("format : %%10c\t\targ : NULL\t\tresult : %10c$\n", NULL);
	printf("format : %% 10c\t\targ : NULL\t\tresult : % 10c$\n", NULL);
	printf("format : %%#10c\t\targ : NULL\t\tresult : %#10c$\n", NULL);
	printf("format : %%010c\t\targ : NULL\t\tresult : %010c$\n", NULL);
	printf("format : %%-10c\t\targ : NULL\t\tresult : %-10c$\n", NULL);
	printf("format : %%+10c\t\targ : NULL\t\tresult : %+10c$\n", NULL);

	printf("\n< precision : zero >\n");
	printf("format : %%.0c\t\targ : 'a'\t\tresult : %.0c$\n", 'a');
	printf("format : %%0.0c\t\targ : 'a'\t\tresult : %0.0c$\n", 'a');
	printf("format : %%10.0c\t\targ : 'a'\t\tresult : %10.0c$\n", 'a');
	printf("format : %% 10.0c\targ : 'a'\t\tresult : % 10.0c$\n", 'a');
	printf("format : %%#10.0c\targ : 'a'\t\tresult : %#10.0c$\n", 'a');
	printf("format : %%010.0c\targ : 'a'\t\tresult : %010.0c$\n", 'a');
	printf("format : %%-10.0c\targ : 'a'\t\tresult : %-10.0c$\n", 'a');
	printf("format : %%+10.0c\targ : 'a'\t\tresult : %+10.0c$\n", 'a');

	printf("\n< argument & precision : NULL >\n");
	printf("format : %%.0c\t\targ : NULL\t\tresult : %.0c$\n", NULL);
	printf("format : %%0.0c\t\targ : NULL\t\tresult : %0.0c$\n", NULL);
	printf("format : %%10.0c\t\targ : NULL\t\tresult : %10.0c$\n", NULL);
	printf("format : %% 10.0c\targ : NULL\t\tresult : % 10.0c$\n", NULL);
	printf("format : %%#10.0c\targ : NULL\t\tresult : %#10.0c$\n", NULL);
	printf("format : %%010.0c\targ : NULL\t\tresult : %010.0c$\n", NULL);
	printf("format : %%-10.0c\targ : NULL\t\tresult : %-10.0c$\n", NULL);
	printf("format : %%+10.0c\targ : NULL\t\tresult : %+10.0c$\n", NULL);

	printf("\n< width & precision >\n");
	printf("format : %%5.10c\t\targ : 'a'\t\tresult : %5.10c$\n", 'a');
    	printf("format : %%10.5c\t\targ : 'a'\t\tresult : %10.5c$\n", 'a');
	printf("format : %%10.1c\t\targ : 'a'\t\tresult : %10.1c$\n", 'a');
	
	printf("\n< width flags >\n");
	printf("format : %%10 c\t\targ : 'a'\t\tresult : %10 c$\n", 'a');
	printf("format : %%10#c\t\targ : 'a'\t\tresult : %10#c$\n", 'a');
	printf("format : %%10-c\t\targ : 'a'\t\tresult : %10-c$\n", 'a');
	printf("format : %%10+c\t\targ : 'a'\t\tresult : %10+c$\n", 'a');
	printf("format : %%10 0c\t\targ : 'a'\t\tresult : %10 0c$\n", 'a');
	printf("format : %%10#0c\t\targ : 'a'\t\tresult : %10#0c$\n", 'a');
	printf("format : %%10-0c\t\targ : 'a'\t\tresult : %10-0c$\n", 'a');
	printf("format : %%10+0c\t\targ : 'a'\t\tresult : %10+0c$\n", 'a');

	printf("\n< precision flags >\n");
	printf("format : %%.10c\t\targ : 'a'\t\tresult : %.10c$\n", 'a');
	printf("format : %%.10 c\t\targ : 'a'\t\tresult : %.10 c$\n", 'a');
	printf("format : %%.10#c\t\targ : 'a'\t\tresult : %.10#c$\n", 'a');
	printf("format : %%.10-c\t\targ : 'a'\t\tresult : %.10-c$\n", 'a');
	printf("format : %%.10+c\t\targ : 'a'\t\tresult : %.10+c$\n", 'a');
	printf("format : %%.-10c\t\targ : 'a'\t\tresult : %.-10c$\n", 'a');
	printf("format : %%.-+10c\targ : 'a'\t\tresult : %.-+10c$\n", 'a');
	printf("format : %%.+-10c\targ : 'a'\t\tresult : %.+-10c$\n", 'a');
	printf("format : %%.-+-10c\targ : 'a'\t\tresult : %.-+-10c$\n", 'a');
	printf("format : %%.+-+10c\targ : 'a'\t\tresult : %.+-+10c$\n", 'a');
	printf("format : %%.-+-+10c\targ : 'a'\t\tresult : %.-+-+10c$\n", 'a');
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : precision >\n");
	printf("format : %%.*c\t\targ : 10, 'a'\t\tresult : %.*c$\n", 10, 'a');
	printf("format : %%.*c\t\targ : -10, 'a'\t\tresult : %.*c$\n", -10, 'a');
	printf("format : %%.*c\t\targ : -+10, 'a'\t\tresult : %.*c$\n", -+10, 'a');
	printf("format : %%.*c\t\targ : +-10, 'a'\t\tresult : %.*c$\n", +-10, 'a');
	printf("format : %%.*c\t\targ : -+-10, 'a'\tresult : %.*c$\n", -+-10, 'a');
	printf("format : %%.*c\t\targ : +-+10, 'a'\tresult : %.*c$\n", +-+10, 'a');
	printf("format : %%.*c\t\targ : -+-+10, 'a'\tresult : %.*c$\n", -+-+10, 'a');
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : width >\n");
    	printf("format : %%*c\t\targ : 10, 'a'\t\tresult : %*c$\n", 10, 'a');
	printf("format : %%*c\t\targ : -10, 'a'\t\tresult : %*c$\n", -10, 'a');
	printf("format : %%*c\t\targ : -+10, 'a'\t\tresult : %*c$\n", -+10, 'a');
	printf("format : %%*c\t\targ : +-10, 'a'\t\tresult : %*c$\n", +-10, 'a');
	printf("format : %%*c\t\targ : -+-10, 'a'\tresult : %*c$\n", -+-10, 'a');
	printf("format : %%*c\t\targ : +-+10, 'a'\tresult : %*c$\n", +-+10, 'a');
	printf("format : %%*c\t\targ : -+-+10, 'a'\tresult : %*c$\n", -+-+10, 'a');
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< width & width >\n");
	printf("format : %%6-10c\t\targ : 'a'\t\tresult : %6-10c$\n", 'a');
	printf("format : %%6-10+c\targ : 'a'\t\tresult : %6-10+c$\n", 'a');
	printf("format : %%6+10 0c\targ : 'a'\t\tresult : %6+10 0c$\n", 'a');
	printf("format : %%10+6 0c\targ : 'a'\t\tresult : %10+6 0c$\n", 'a');
	printf("format : %%6+10-20c\targ : 'a'\t\tresult : %6+10-20c$\n", 'a');
	printf("format : %%6+20-10c\targ : 'a'\t\tresult : %6+20-10c$\n", 'a');
	printf("format : %%20*c\t\targ : 10, 'a'\t\tresult : %20*c$\n", 10, 'a');
	printf("format : %%20*6c\t\targ : 10, 'a'\t\tresult : %20*6c$\n", 10, 'a');
	
	printf("\n< precision & width >\n");
	printf("format : %%.6-10c\targ : 'a'\t\tresult : %.6-10c$\n", 'a');
    	printf("format : %%.6-10+c\targ : 'a'\t\tresult : %.6-10+c$\n", 'a');
    	printf("format : %%.6+10 0c\targ : 'a'\t\tresult : %.6+10 0c$\n", 'a');
    	printf("format : %%.10+6 0c\targ : 'a'\t\tresult : %.10+6 0c$\n", 'a');
    	printf("format : %%.6+10-20c\targ : 'a'\t\tresult : %.6+10-20c$\n", 'a');
	printf("format : %%.6+20-10c\targ : 'a'\t\tresult : %.6+20-10c$\n", 'a');
	
	printf("\n< precision & precision >\n");
    	printf("format : %%.6-.10c\targ : 'a'\t\tresult : %.6-.10c$\n", 'a');
    	printf("format : %%.6-.10+c\targ : 'a'\t\tresult : %.6-.10+c$\n", 'a');
    	printf("format : %%.6+.10 0c\targ : 'a'\t\tresult : %.6+.10 0c$\n", 'a');
    	printf("format : %%.10+.6 0c\targ : 'a'\t\tresult : %.10+.6 0c$\n", 'a');
    	printf("format : %%.6+.10-.20c\targ : 'a'\t\tresult : %.6+.10-.20c$\n", 'a');
    	printf("format : %%.6+.20-.10c\targ : 'a'\t\tresult : %.6+.20-.10c$\n", 'a');


	printf("\n\n");
    	printf("********************************************************************************\n");
   	printf("*                                                                              *\n");
	printf("*                                specifier : s                                 *\n");
    	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("format : %%s\t\targ : NULL\t\tresult : %s$\n", NULL);
	printf("format : %%10s\t\targ : NULL\t\tresult : %10s$\n", NULL);
	printf("format : %% 10s\t\targ : NULL\t\tresult : % 10s$\n", NULL);
	printf("format : %%#10s\t\targ : NULL\t\tresult : %#10s$\n", NULL);
	printf("format : %%010s\t\targ : NULL\t\tresult : %010s$\n", NULL);
	printf("format : %%-10s\t\targ : NULL\t\tresult : %-10s$\n", NULL);
	printf("format : %%+10s\t\targ : NULL\t\tresult : %+10s$\n", NULL);

	printf("\n< precision : zero >\n");
	printf("format : %%.0s\t\targ : \"abcd\"\t\tresult : %.0s$\n", "abcd");
	printf("format : %%0.0s\t\targ : \"abcd\"\t\tresult : %0.0s$\n", "abcd");
	printf("format : %%10.0s\t\targ : \"abcd\"\t\tresult : %10.0s$\n", "abcd");
	printf("format : %% 10.0s\targ : \"abcd\"\t\tresult : % 10.0s$\n", "abcd");
	printf("format : %%#10.0s\targ : \"abcd\"\t\tresult : %#10.0s$\n", "abcd");
	printf("format : %%010.0s\targ : \"abcd\"\t\tresult : %010.0s$\n", "abcd");
	printf("format : %%-10.0s\targ : \"abcd\"\t\tresult : %-10.0s$\n", "abcd");
	printf("format : %%+10.0s\targ : \"abcd\"\t\tresult : %+10.0s$\n", "abcd");

	printf("\n< argument & precision : NULL >\n");
	printf("format : %%.0s\t\targ : NULL\t\tresult : %.0s$\n", NULL);
	printf("format : %%0.0s\t\targ : NULL\t\tresult : %0.0s$\n", NULL);
	printf("format : %%10.0s\t\targ : NULL\t\tresult : %10.0s$\n", NULL);
	printf("format : %% 10.0s\targ : NULL\t\tresult : % 10.0s$\n", NULL);
	printf("format : %%#10.0s\targ : NULL\t\tresult : %#10.0s$\n", NULL);
	printf("format : %%010.0s\targ : NULL\t\tresult : %010.0s$\n", NULL);
	printf("format : %%-10.0s\targ : NULL\t\tresult : %-10.0s$\n", NULL);
	printf("format : %%+10.0s\targ : NULL\t\tresult : %+10.0s$\n", NULL);

	printf("\n< width & precision >\n");
	printf("format : %%5.10s\t\targ : \"abcd\"\t\tresult : %5.10s$\n", "abcd");
    	printf("format : %%10.5s\t\targ : \"abcd\"\t\tresult : %10.5s$\n", "abcd");
	printf("format : %%10.2s\t\targ : \"abcd\"\t\tresult : %10.2s$\n", "abcd");

	printf("\n< width flags >\n");
	printf("format : %%10 s\t\targ : \"abcd\"\t\tresult : %10 s$\n", "abcd");
	printf("format : %%10#s\t\targ : \"abcd\"\t\tresult : %10#s$\n", "abcd");
	printf("format : %%10-s\t\targ : \"abcd\"\t\tresult : %10-s$\n", "abcd");
	printf("format : %%10+s\t\targ : \"abcd\"\t\tresult : %10+s$\n", "abcd");
	printf("format : %%10 0s\t\targ : \"abcd\"\t\tresult : %10 0s$\n", "abcd");
	printf("format : %%10#0s\t\targ : \"abcd\"\t\tresult : %10#0s$\n", "abcd");
	printf("format : %%10-0s\t\targ : \"abcd\"\t\tresult : %10-0s$\n", "abcd");
	printf("format : %%10+0s\t\targ : \"abcd\"\t\tresult : %10+0s$\n", "abcd");

	printf("\n< precision flags >\n");
	printf("format : %%.10s\t\targ : \"abcd\"\t\tresult : %.10s$\n", "abcd");
	printf("format : %%.10 s\t\targ : \"abcd\"\t\tresult : %.10 s$\n", "abcd");
	printf("format : %%.10#s\t\targ : \"abcd\"\t\tresult : %.10#s$\n", "abcd");
	printf("format : %%.10-s\t\targ : \"abcd\"\t\tresult : %.10-s$\n", "abcd");
	printf("format : %%.10+s\t\targ : \"abcd\"\t\tresult : %.10+s$\n", "abcd");
	printf("format : %%.-10s\t\targ : \"abcd\"\t\tresult : %.-10s$\n", "abcd");
	printf("format : %%.-+10s\targ : \"abcd\"\t\tresult : %.-+10s$\n", "abcd");
	printf("format : %%.+-10s\targ : \"abcd\"\t\tresult : %.+-10s$\n", "abcd");
	printf("format : %%.-+-10s\targ : \"abcd\"\t\tresult : %.-+-10s$\n", "abcd");
	printf("format : %%.+-+10s\targ : \"abcd\"\t\tresult : %.+-+10s$\n", "abcd");
	printf("format : %%.-+-+10s\targ : \"abcd\"\t\tresult : %.-+-+10s$\n", "abcd");
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : precision >\n");
	printf("format : %%.*s\t\targ : 10, \"abcd\"\tresult : %.*s$\n", 10, "abcd");
	printf("format : %%.*s\t\targ : -10, \"abcd\"\tresult : %.*s$\n", -10, "abcd");
	printf("format : %%.*s\t\targ : -+10, \"abcd\"\tresult : %.*s$\n", -+10, "abcd");
	printf("format : %%.*s\t\targ : +-10, \"abcd\"\tresult : %.*s$\n", +-10, "abcd");
	printf("format : %%.*s\t\targ : -+-10, \"abcd\"\tresult : %.*s$\n", -+-10, "abcd");
	printf("format : %%.*s\t\targ : +-+10, \"abcd\"\tresult : %.*s$\n", +-+10, "abcd");
	printf("format : %%.*s\t\targ : -+-+10, \"abcd\"\tresult : %.*s$\n", -+-+10, "abcd");
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : width >\n");
	printf("format : %%*s\t\targ : 10, \"abcd\"\tresult : %*s$\n", 10, "abcd");
	printf("format : %%*s\t\targ : -10, \"abcd\"\tresult : %*s$\n", -10, "abcd");
	printf("format : %%*s\t\targ : -+10, \"abcd\"\tresult : %*s$\n", -+10, "abcd");
	printf("format : %%*s\t\targ : +-10, \"abcd\"\tresult : %*s$\n", +-10, "abcd");
	printf("format : %%*s\t\targ : -+-10, \"abcd\"\tresult : %*s$\n", -+-10, "abcd");
	printf("format : %%*s\t\targ : +-+10, \"abcd\"\tresult : %*s$\n", +-+10, "abcd");
	printf("format : %%*s\t\targ : -+-+10, \"abcd\"\tresult : %*s$\n", -+-+10, "abcd");
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< width & width >\n");
	printf("format : %%6-10s\t\targ : \"abcd\"\t\tresult : %6-10s$\n", "abcd");
	printf("format : %%6-10+s\targ : \"abcd\"\t\tresult : %6-10+s$\n", "abcd");
	printf("format : %%6+10 0s\targ : \"abcd\"\t\tresult : %6+10 0s$\n", "abcd");
	printf("format : %%10+6 0s\targ : \"abcd\"\t\tresult : %10+6 0s$\n", "abcd");
	printf("format : %%6+10-20s\targ : \"abcd\"\t\tresult : %6+10-20s$\n", "abcd");
	printf("format : %%6+20-10s\targ : \"abcd\"\t\tresult : %6+20-10s$\n", "abcd");
	printf("format : %%20*s\t\targ : 10, \"abcd\"\tresult : %20*s$\n", 10, "abcd");	
	printf("format : %%20*6s\t\targ : 10, \"abcd\"\tresult : %20*6s$\n", 10, "abcd");

	printf("\n< precision & width >\n");
	printf("format : %%.6-10s\targ : \"abcd\"\t\tresult : %.6-10s$\n", "abcd");
    	printf("format : %%.6-10+s\targ : \"abcd\"\t\tresult : %.6-10+s$\n", "abcd");
    	printf("format : %%.6+10 0s\targ : \"abcd\"\t\tresult : %.6+10 0s$\n", "abcd");
    	printf("format : %%.10+6 0s\targ : \"abcd\"\t\tresult : %.10+6 0s$\n", "abcd");
    	printf("format : %%.6+10-20s\targ : \"abcd\"\t\tresult : %.6+10-20s$\n", "abcd");
    	printf("format : %%.6+20-10s\targ : \"abcd\"\t\tresult : %.6+20-10s$\n", "abcd");
	
	printf("\n< precision & precision >\n");
    	printf("format : %%.6-.10s\targ : \"abcd\"\t\tresult : %.6-.10s$\n", "abcd");
    	printf("format : %%.6-.10+s\targ : \"abcd\"\t\tresult : %.6-.10+s$\n", "abcd");
    	printf("format : %%.6+.10 0s\targ : \"abcd\"\t\tresult : %.6+.10 0s$\n", "abcd");
    	printf("format : %%.10+.6 0s\targ : \"abcd\"\t\tresult : %.10+.6 0s$\n", "abcd");
    	printf("format : %%.6+.10-.20s\targ : \"abcd\"\t\tresult : %.6+.10-.20s$\n", "abcd");
    	printf("format : %%.6+.20-.10s\targ : \"abcd\"\t\tresult : %.6+.20-.10s$\n", "abcd");


	printf("\n\n");
    	printf("********************************************************************************\n");
    	printf("*                                                                              *\n");
	printf("*                                specifier : p                                 *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("format : %%p\t\targ : NULL\t\tresult : %p$\n", NULL);
	printf("format : %%0p\t\targ : NULL\t\tresult : %0p$\n", NULL);
	printf("format : %%10p\t\targ : NULL\t\tresult : %10p$\n", NULL);
	printf("format : %% 10p\t\targ : NULL\t\tresult : % 10p$\n", NULL);
	printf("format : %%#10p\t\targ : NULL\t\tresult : %#10p$\n", NULL);	
	printf("format : %%010p\t\targ : NULL\t\tresult : %010p$\n", NULL);
	printf("format : %%-10p\t\targ : NULL\t\tresult : %-10p$\n", NULL);
	printf("format : %%+10p\t\targ : NULL\t\tresult : %+10p$\n", NULL);

	printf("\n< precision : zero >\n");
	printf("format : %%.0p\t\targ : 1234\t\tresult : %.0p$\n", 1234);
	printf("format : %%0.0p\t\targ : 1234\t\tresult : %0.0p$\n", 1234);
	printf("format : %%10.0p\t\targ : 1234\t\tresult : %10.0p$\n", 1234);
	printf("format : %% 10.0p\targ : 1234\t\tresult : % 10.0p$\n", 1234);
	printf("format : %%#10.0p\targ : 1234\t\tresult : %#10.0p$\n", 1234);
	printf("format : %%010.0p\targ : 1234\t\tresult : %010.0p$\n", 1234);
	printf("format : %%-10.0p\targ : 1234\t\tresult : %-10.0p$\n", 1234);
	printf("format : %%+10.0p\targ : 1234\t\tresult : %+10.0p$\n", 1234);

	printf("\n< argument & precision : NULL >\n");
	printf("format : %%.0p\t\targ : NULL\t\tresult : %.0p$\n", NULL);
	printf("format : %%0.0p\t\targ : NULL\t\tresult : %0.0p$\n", NULL);
	printf("format : %%10.0p\t\targ : NULL\t\tresult : %10.0p$\n", NULL);
	printf("format : %% 10.0p\targ : NULL\t\tresult : % 10.0p$\n", NULL);
	printf("format : %%#10.0p\targ : NULL\t\tresult : %#10.0p$\n", NULL);
	printf("format : %%010.0p\targ : NULL\t\tresult : %010.0p$\n", NULL);
	printf("format : %%-10.0p\targ : NULL\t\tresult : %-10.0p$\n", NULL);
	printf("format : %%+10.0p\targ : NULL\t\tresult : %+10.0p$\n", NULL);

	printf("\n< width & precision >\n");
	printf("format : %%5.10p\t\targ : 1234\t\tresult : %5.10p$\n", 1234);
    	printf("format : %%10.5p\t\targ : 1234\t\tresult : %10.5p$\n", 1234);
	printf("format : %%10.2p\t\targ : 1234\t\tresult : %10.2p$\n", 1234);

	printf("\n< width flags >\n");
	printf("format : %%10 p\t\targ : 1234\t\tresult : %10 p$\n", 1234);
	printf("format : %%10#p\t\targ : 1234\t\tresult : %10#p$\n", 1234);
	printf("format : %%10-p\t\targ : 1234\t\tresult : %10-p$\n", 1234);
	printf("format : %%10+p\t\targ : 1234\t\tresult : %10+p$\n", 1234);
	printf("format : %%10 0p\t\targ : 1234\t\tresult : %10 0p$\n", 1234);
	printf("format : %%10#0p\t\targ : 1234\t\tresult : %10#0p$\n", 1234);
	printf("format : %%10-0p\t\targ : 1234\t\tresult : %10-0p$\n", 1234);
	printf("format : %%10+0p\t\targ : 1234\t\tresult : %10+0p$\n", 1234);

	printf("\n< precision flags >\n");
	printf("format : %%.10p\t\targ : 1234\t\tresult : %.10p$\n", 1234);
	printf("format : %%.10 p\t\targ : 1234\t\tresult : %.10 p$\n", 1234);
	printf("format : %%.10#p\t\targ : 1234\t\tresult : %.10#p$\n", 1234);
	printf("format : %%.10-p\t\targ : 1234\t\tresult : %.10-p$\n", 1234);
	printf("format : %%.10+p\t\targ : 1234\t\tresult : %.10+p$\n", 1234);
	printf("format : %%.-10p\t\targ : 1234\t\tresult : %.-10p$\n", 1234);
	printf("format : %%.-+10p\targ : 1234\t\tresult : %.-+10p$\n", 1234);
	printf("format : %%.+-10p\targ : 1234\t\tresult : %.+-10p$\n", 1234);
	printf("format : %%.-+-10p\targ : 1234\t\tresult : %.-+-10p$\n", 1234);
	printf("format : %%.+-+10p\targ : 1234\t\tresult : %.+-+10p$\n", 1234);
	printf("format : %%.-+-+10p\targ : 1234\t\tresult : %.-+-+10p$\n", 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : precision >\n");
	printf("format : %%.*p\t\targ : 10, 1234\t\tresult : %.*p$\n", 10, 1234);
	printf("format : %%.*p\t\targ : -10, 1234\t\tresult : %.*p$\n", -10, 1234);
	printf("format : %%.*p\t\targ : -+10, 1234\tresult : %.*p$\n", -+10, 1234);
	printf("format : %%.*p\t\targ : +-10, 1234\tresult : %.*p$\n", +-10, 1234);
	printf("format : %%.*p\t\targ : -+-10, 1234\tresult : %.*p$\n", -+-10, 1234);
	printf("format : %%.*p\t\targ : +-+10, 1234\tresult : %.*p$\n", +-+10, 1234);
	printf("format : %%.*p\t\targ : -+-+10, 1234\tresult : %.*p$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");


	printf("\n< argument flags : width >\n");
    	printf("format : %%*p\t\targ : 10, 1234\t\tresult : %*p$\n", 10, 1234);
	printf("format : %%*p\t\targ : -10, 1234\t\tresult : %*p$\n", -10, 1234);
	printf("format : %%*p\t\targ : -+10, 1234\tresult : %*p$\n", -+10, 1234);
	printf("format : %%*p\t\targ : +-10, 1234\tresult : %*p$\n", +-10, 1234);
	printf("format : %%*p\t\targ : -+-10, 1234\tresult : %*p$\n", -+-10, 1234);
	printf("format : %%*p\t\targ : +-+10, 1234\tresult : %*p$\n", +-+10, 1234);
	printf("format : %%*p\t\targ : -+-+10, 1234\tresult : %*p$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< width & width >\n");
	printf("format : %%6-10p\t\targ : 1234\t\tresult : %6-10p$\n", 1234);
	printf("format : %%6-10+p\targ : 1234\t\tresult : %6-10+p$\n", 1234);
	printf("format : %%6+10 0p\targ : 1234\t\tresult : %6+10 0p$\n", 1234);
	printf("format : %%10+6 0p\targ : 1234\t\tresult : %10+6 0p$\n", 1234);
	printf("format : %%6+10-20p\targ : 1234\t\tresult : %6+10-20p$\n", 1234);
	printf("format : %%6+20-10p\targ : 1234\t\tresult : %6+20-10p$\n", 1234);
	printf("format : %%20*p\t\targ : 10, 1234\t\tresult : %20*p$\n", 10, 1234);
	printf("format : %%20*6p\t\targ : 10, 1234\t\tresult : %20*6p$\n", 10, 1234);	

	printf("\n< precision & width >\n");
	printf("format : %%.6-10p\targ : 1234\t\tresult : %.6-10p$\n", 1234);
    	printf("format : %%.6-10+p\targ : 1234\t\tresult : %.6-10+p$\n", 1234);
    	printf("format : %%.6+10 0p\targ : 1234\t\tresult : %.6+10 0p$\n", 1234);
    	printf("format : %%.10+6 0p\targ : 1234\t\tresult : %.10+6 0p$\n", 1234);
    	printf("format : %%.6+10-20p\targ : 1234\t\tresult : %.6+10-20p$\n", 1234);
    	printf("format : %%.6+20-10p\targ : 1234\t\tresult : %.6+20-10p$\n", 1234);
	
	printf("\n< precision & precision >\n");
    	printf("format : %%.6-.10p\targ : 1234\t\tresult : %.6-.10p$\n", 1234);
    	printf("format : %%.6-.10+p\targ : 1234\t\tresult : %.6-.10+p$\n", 1234);
    	printf("format : %%.6+.10 0p\targ : 1234\t\tresult : %.6+.10 0p$\n", 1234);
    	printf("format : %%.10+.6 0p\targ : 1234\t\tresult : %.10+.6 0p$\n", 1234);
    	printf("format : %%.6+.10-.20p\targ : 1234\t\tresult : %.6+.10-.20p$\n", 1234);
    	printf("format : %%.6+.20-.10p\targ : 1234\t\tresult : %.6+.20-.10p$\n", 1234);
	
	printf("\n< limits >\n");
	printf("format : %%p\targ : -1\t\t\tresult : %p$\n", -1);
	printf("format : %%p\targ : 18446744073709551615\tresult : %p$\n", 18446744073709551615);
	printf("\n*** error: integer literal is too large(18446744073709551616)\n");


	printf("\n\n");
	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                               specifier : d                                  *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("format : %%d\t\targ : NULL\t\tresult : %d$\n", NULL);
	printf("format : %%0d\t\targ : NULL\t\tresult : %0d$\n", NULL);
	printf("format : %%10d\t\targ : NULL\t\tresult : %10d$\n", NULL);
	printf("format : %% 10d\t\targ : NULL\t\tresult : % 10d$\n", NULL);
	printf("format : %%#10d\t\targ : NULL\t\tresult : %#10d$\n", NULL);	
	printf("format : %%010d\t\targ : NULL\t\tresult : %010d$\n", NULL);
	printf("format : %%-10d\t\targ : NULL\t\tresult : %-10d$\n", NULL);
	printf("format : %%+10d\t\targ : NULL\t\tresult : %+10d$\n", NULL);

	printf("\n< precision : zero >\n");
	printf("format : %%.0d\t\targ : 1234\t\tresult : %.0d$\n", 1234);
	printf("format : %%0.0d\t\targ : 1234\t\tresult : %0.0d$\n", 1234);
	printf("format : %%10.0d\t\targ : 1234\t\tresult : %10.0d$\n", 1234);
	printf("format : %% 10.0d\targ : 1234\t\tresult : % 10.0d$\n", 1234);
	printf("format : %%#10.0d\targ : 1234\t\tresult : %#10.0d$\n", 1234);
	printf("format : %%010.0d\targ : 1234\t\tresult : %010.0d$\n", 1234);
	printf("format : %%-10.0d\targ : 1234\t\tresult : %-10.0d$\n", 1234);
	printf("format : %%+10.0d\targ : 1234\t\tresult : %+10.0d$\n", 1234);

	printf("\n< argument & precision : NULL >\n");
	printf("format : %%.0d\t\targ : NULL\t\tresult : %.0d$\n", NULL);
	printf("format : %%0.0d\t\targ : NULL\t\tresult : %0.0d$\n", NULL);
	printf("format : %%10.0d\t\targ : NULL\t\tresult : %10.0d$\n", NULL);
	printf("format : %% 10.0d\targ : NULL\t\tresult : % 10.0d$\n", NULL);
	printf("format : %%#10.0d\targ : NULL\t\tresult : %#10.0d$\n", NULL);
	printf("format : %%010.0d\targ : NULL\t\tresult : %010.0d$\n", NULL);
	printf("format : %%-10.0d\targ : NULL\t\tresult : %-10.0d$\n", NULL);
	printf("format : %%+10.0d\targ : NULL\t\tresult : %+10.0d$\n", NULL);

	printf("\n< width & precision >\n");
	printf("format : %%5.10d\t\targ : 1234\t\tresult : %5.10d$\n", 1234);
    	printf("format : %%10.5d\t\targ : 1234\t\tresult : %10.5d$\n", 1234);
	printf("format : %%10.2d\t\targ : 1234\t\tresult : %10.2d$\n", 1234);

	printf("\n< width flags >\n");
	printf("format : %%10 d\t\targ : 1234\t\tresult : %10 d$\n", 1234);
	printf("format : %%10#d\t\targ : 1234\t\tresult : %10#d$\n", 1234);
	printf("format : %%10-d\t\targ : 1234\t\tresult : %10-d$\n", 1234);
	printf("format : %%10+d\t\targ : 1234\t\tresult : %10+d$\n", 1234);
	printf("format : %%10 0d\t\targ : 1234\t\tresult : %10 0d$\n", 1234);
	printf("format : %%10#0d\t\targ : 1234\t\tresult : %10#0d$\n", 1234);
	printf("format : %%10-0d\t\targ : 1234\t\tresult : %10-0d$\n", 1234);
	printf("format : %%10+0d\t\targ : 1234\t\tresult : %10+0d$\n", 1234);

	printf("\n< precision flags >\n");
	printf("format : %%.10d\t\targ : 1234\t\tresult : %.10d$\n", 1234);
	printf("format : %%.10 d\t\targ : 1234\t\tresult : %.10 d$\n", 1234);
	printf("format : %%.10#d\t\targ : 1234\t\tresult : %.10#d$\n", 1234);
	printf("format : %%.10-d\t\targ : 1234\t\tresult : %.10-d$\n", 1234);
	printf("format : %%.10+d\t\targ : 1234\t\tresult : %.10+d$\n", 1234);
	printf("format : %%.-10d\t\targ : 1234\t\tresult : %.-10d$\n", 1234);
	printf("format : %%.-+10d\targ : 1234\t\tresult : %.-+10d$\n", 1234);
	printf("format : %%.+-10d\targ : 1234\t\tresult : %.+-10d$\n", 1234);
	printf("format : %%.-+-10d\targ : 1234\t\tresult : %.-+-10d$\n", 1234);
	printf("format : %%.+-+10d\targ : 1234\t\tresult : %.+-+10d$\n", 1234);
	printf("format : %%.-+-+10d\targ : 1234\t\tresult : %.-+-+10d$\n", 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : precision >\n");
	printf("format : %%.*d\t\targ : 10, 1234\t\tresult : %.*d$\n", 10, 1234);
	printf("format : %%.*d\t\targ : -10, 1234\t\tresult : %.*d$\n", -10, 1234);
	printf("format : %%.*d\t\targ : -+10, 1234\tresult : %.*d$\n", -+10, 1234);
	printf("format : %%.*d\t\targ : +-10, 1234\tresult : %.*d$\n", +-10, 1234);
	printf("format : %%.*d\t\targ : -+-10, 1234\tresult : %.*d$\n", -+-10, 1234);
	printf("format : %%.*d\t\targ : +-+10, 1234\tresult : %.*d$\n", +-+10, 1234);
	printf("format : %%.*d\t\targ : -+-+10, 1234\tresult : %.*d$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : width >\n");
    	printf("format : %%*d\t\targ : 10, 1234\t\tresult : %*d$\n", 10, 1234);
	printf("format : %%*d\t\targ : -10, 1234\t\tresult : %*d$\n", -10, 1234);
	printf("format : %%*d\t\targ : -+10, 1234\tresult : %*d$\n", -+10, 1234);
	printf("format : %%*d\t\targ : +-10, 1234\tresult : %*d$\n", +-10, 1234);
	printf("format : %%*d\t\targ : -+-10, 1234\tresult : %*d$\n", -+-10, 1234);
	printf("format : %%*d\t\targ : +-+10, 1234\tresult : %*d$\n", +-+10, 1234);
	printf("format : %%*d\t\targ : -+-+10, 1234\tresult : %*d$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< width & width >\n");
	printf("format : %%6-10d\t\targ : 1234\t\tresult : %6-10d$\n", 1234);
	printf("format : %%6-10+d\targ : 1234\t\tresult : %6-10+d$\n", 1234);
	printf("format : %%6+10 0d\targ : 1234\t\tresult : %6+10 0d$\n", 1234);
	printf("format : %%10+6 0d\targ : 1234\t\tresult : %10+6 0d$\n", 1234);
	printf("format : %%6+10-20d\targ : 1234\t\tresult : %6+10-20d$\n", 1234);
	printf("format : %%6+20-10d\targ : 1234\t\tresult : %6+20-10d$\n", 1234);
	printf("format : %%20*d\t\targ : 10, 1234\t\tresult : %20*d$\n", 10, 1234);
	printf("format : %%20*6d\t\targ : 10, 1234\t\tresult : %20*6d$\n", 10, 1234);	

	printf("\n< precision & width >\n");
	printf("format : %%.6-10d\targ : 1234\t\tresult : %.6-10d$\n", 1234);
    	printf("format : %%.6-10+d\targ : 1234\t\tresult : %.6-10+d$\n", 1234);
    	printf("format : %%.6+10 0d\targ : 1234\t\tresult : %.6+10 0d$\n", 1234);
    	printf("format : %%.10+6 0d\targ : 1234\t\tresult : %.10+6 0d$\n", 1234);
    	printf("format : %%.6+10-20d\targ : 1234\t\tresult : %.6+10-20d$\n", 1234);
    	printf("format : %%.6+20-10d\targ : 1234\t\tresult : %.6+20-10d$\n", 1234);
	
	printf("\n< precision & precision >\n");
    	printf("format : %%.6-.10d\targ : 1234\t\tresult : %.6-.10d$\n", 1234);
    	printf("format : %%.6-.10+d\targ : 1234\t\tresult : %.6-.10+d$\n", 1234);
    	printf("format : %%.6+.10 0d\targ : 1234\t\tresult : %.6+.10 0d$\n", 1234);
    	printf("format : %%.10+.6 0d\targ : 1234\t\tresult : %.10+.6 0d$\n", 1234);
    	printf("format : %%.6+.10-.20d\targ : 1234\t\tresult : %.6+.10-.20d$\n", 1234);
    	printf("format : %%.6+.20-.10d\targ : 1234\t\tresult : %.6+.20-.10d$\n", 1234);



	printf("\n\n");
	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                               specifier : u                                  *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("format : %%u\t\targ : NULL\t\tresult : %u$\n", NULL);
	printf("format : %%0u\t\targ : NULL\t\tresult : %0u$\n", NULL);
	printf("format : %%10u\t\targ : NULL\t\tresult : %10u$\n", NULL);
	printf("format : %% 10u\t\targ : NULL\t\tresult : % 10u$\n", NULL);
	printf("format : %%#10u\t\targ : NULL\t\tresult : %#10u$\n", NULL);	
	printf("format : %%010u\t\targ : NULL\t\tresult : %010u$\n", NULL);
	printf("format : %%-10u\t\targ : NULL\t\tresult : %-10u$\n", NULL);
	printf("format : %%+10u\t\targ : NULL\t\tresult : %+10u$\n", NULL);

	printf("\n< precision : zero >\n");
	printf("format : %%.0u\t\targ : 1234\t\tresult : %.0u$\n", 1234);
	printf("format : %%0.0u\t\targ : 1234\t\tresult : %0.0u$\n", 1234);
	printf("format : %%10.0u\t\targ : 1234\t\tresult : %10.0u$\n", 1234);
	printf("format : %% 10.0u\targ : 1234\t\tresult : % 10.0u$\n", 1234);
	printf("format : %%#10.0u\targ : 1234\t\tresult : %#10.0u$\n", 1234);
	printf("format : %%010.0u\targ : 1234\t\tresult : %010.0u$\n", 1234);
	printf("format : %%-10.0u\targ : 1234\t\tresult : %-10.0u$\n", 1234);
	printf("format : %%+10.0u\targ : 1234\t\tresult : %+10.0u$\n", 1234);

	printf("\n< argument & precision : NULL >\n");
	printf("format : %%.0u\t\targ : NULL\t\tresult : %.0u$\n", NULL);
	printf("format : %%0.0u\t\targ : NULL\t\tresult : %0.0u$\n", NULL);
	printf("format : %%10.0u\t\targ : NULL\t\tresult : %10.0u$\n", NULL);
	printf("format : %% 10.0u\targ : NULL\t\tresult : % 10.0u$\n", NULL);
	printf("format : %%#10.0u\targ : NULL\t\tresult : %#10.0u$\n", NULL);
	printf("format : %%010.0u\targ : NULL\t\tresult : %010.0u$\n", NULL);
	printf("format : %%-10.0u\targ : NULL\t\tresult : %-10.0u$\n", NULL);
	printf("format : %%+10.0u\targ : NULL\t\tresult : %+10.0u$\n", NULL);

	printf("\n< width & precision >\n");
	printf("format : %%5.10u\t\targ : 1234\t\tresult : %5.10u$\n", 1234);
    	printf("format : %%10.5u\t\targ : 1234\t\tresult : %10.5u$\n", 1234);
	printf("format : %%10.2u\t\targ : 1234\t\tresult : %10.2u$\n", 1234);


	printf("\n< width flags >\n");
	printf("format : %%10 u\t\targ : 1234\t\tresult : %10 u$\n", 1234);
	printf("format : %%10#u\t\targ : 1234\t\tresult : %10#u$\n", 1234);
	printf("format : %%10-u\t\targ : 1234\t\tresult : %10-u$\n", 1234);
	printf("format : %%10+u\t\targ : 1234\t\tresult : %10+u$\n", 1234);
	printf("format : %%10 0u\t\targ : 1234\t\tresult : %10 0u$\n", 1234);
	printf("format : %%10#0u\t\targ : 1234\t\tresult : %10#0u$\n", 1234);
	printf("format : %%10-0u\t\targ : 1234\t\tresult : %10-0u$\n", 1234);
	printf("format : %%10+0u\t\targ : 1234\t\tresult : %10+0u$\n", 1234);

	printf("\n< precision flags >\n");
	printf("format : %%.10u\t\targ : 1234\t\tresult : %.10u$\n", 1234);
	printf("format : %%.10 u\t\targ : 1234\t\tresult : %.10 u$\n", 1234);
	printf("format : %%.10#u\t\targ : 1234\t\tresult : %.10#u$\n", 1234);
	printf("format : %%.10-u\t\targ : 1234\t\tresult : %.10-u$\n", 1234);
	printf("format : %%.10+u\t\targ : 1234\t\tresult : %.10+u$\n", 1234);
	printf("format : %%.-10u\t\targ : 1234\t\tresult : %.-10u$\n", 1234);
	printf("format : %%.-+10u\targ : 1234\t\tresult : %.-+10u$\n", 1234);
	printf("format : %%.+-10u\targ : 1234\t\tresult : %.+-10u$\n", 1234);
	printf("format : %%.-+-10u\targ : 1234\t\tresult : %.-+-10u$\n", 1234);
	printf("format : %%.+-+10u\targ : 1234\t\tresult : %.+-+10u$\n", 1234);
	printf("format : %%.-+-+10u\targ : 1234\t\tresult : %.-+-+10u$\n", 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : precision >\n");
	printf("format : %%.*u\t\targ : 10, 1234\t\tresult : %.*u$\n", 10, 1234);
	printf("format : %%.*u\t\targ : -10, 1234\t\tresult : %.*u$\n", -10, 1234);
	printf("format : %%.*u\t\targ : -+10, 1234\tresult : %.*u$\n", -+10, 1234);
	printf("format : %%.*u\t\targ : +-10, 1234\tresult : %.*u$\n", +-10, 1234);
	printf("format : %%.*u\t\targ : -+-10, 1234\tresult : %.*u$\n", -+-10, 1234);
	printf("format : %%.*u\t\targ : +-+10, 1234\tresult : %.*u$\n", +-+10, 1234);
	printf("format : %%.*u\t\targ : -+-+10, 1234\tresult : %.*u$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : width >\n");
	printf("format : %%*u\t\targ : -10, 1234\t\tresult : %*u$\n", -10, 1234);
    	printf("format : %%*u\t\targ : 10, 1234\t\tresult : %*u$\n", 10, 1234);
	printf("format : %%*u\t\targ : -+10, 1234\tresult : %*u$\n", -+10, 1234);
	printf("format : %%*u\t\targ : +-10, 1234\tresult : %*u$\n", +-10, 1234);
	printf("format : %%*u\t\targ : -+-10, 1234\tresult : %*u$\n", -+-10, 1234);
	printf("format : %%*u\t\targ : +-+10, 1234\tresult : %*u$\n", +-+10, 1234);
	printf("format : %%*u\t\targ : -+-+10, 1234\tresult : %*u$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< width & width >\n");
	printf("format : %%6-10u\t\targ : 1234\t\tresult : %6-10u$\n", 1234);
	printf("format : %%6-10+u\targ : 1234\t\tresult : %6-10+u$\n", 1234);
	printf("format : %%6+10 0u\targ : 1234\t\tresult : %6+10 0u$\n", 1234);
	printf("format : %%10+6 0u\targ : 1234\t\tresult : %10+6 0u$\n", 1234);
	printf("format : %%6+10-20u\targ : 1234\t\tresult : %6+10-20u$\n", 1234);
	printf("format : %%6+20-10u\targ : 1234\t\tresult : %6+20-10u$\n", 1234);
	printf("format : %%20*u\t\targ : 10, 1234\t\tresult : %20*u$\n", 10, 1234);
	printf("format : %%20*6u\t\targ : 10, 1234\t\tresult : %20*6u$\n", 10, 1234);	

	printf("\n< precision & width >\n");
	printf("format : %%.6-10u\targ : 1234\t\tresult : %.6-10u$\n", 1234);
    	printf("format : %%.6-10+u\targ : 1234\t\tresult : %.6-10+u$\n", 1234);
    	printf("format : %%.6+10 0u\targ : 1234\t\tresult : %.6+10 0u$\n", 1234);
    	printf("format : %%.10+6 0u\targ : 1234\t\tresult : %.10+6 0u$\n", 1234);
    	printf("format : %%.6+10-20u\targ : 1234\t\tresult : %.6+10-20u$\n", 1234);
    	printf("format : %%.6+20-10u\targ : 1234\t\tresult : %.6+20-10u$\n", 1234);
	
	printf("\n< precision & precision >\n");
    	printf("format : %%.6-.10u\targ : 1234\t\tresult : %.6-.10u$\n", 1234);
    	printf("format : %%.6-.10+u\targ : 1234\t\tresult : %.6-.10+u$\n", 1234);
    	printf("format : %%.6+.10 0u\targ : 1234\t\tresult : %.6+.10 0u$\n", 1234);
    	printf("format : %%.10+.6 0u\targ : 1234\t\tresult : %.10+.6 0u$\n", 1234);
    	printf("format : %%.6+.10-.20u\targ : 1234\t\tresult : %.6+.10-.20u$\n", 1234);
    	printf("format : %%.6+.20-.10u\targ : 1234\t\tresult : %.6+.20-.10u$\n", 1234);

	printf("\n< limits >\n");
	printf("format : %%u\t\targ : -1\t\tresult : %u$\n", -1);


	printf("\n\n");
	printf("********************************************************************************\n");
	printf("*                                                                              *\n");
	printf("*                               specifier : x, X                               *\n");
	printf("*                                                                              *\n");
	printf("********************************************************************************\n");

	printf("\n< argument : NULL >\n");
	printf("format : %%x\t\targ : NULL\t\tresult : %x$\n", NULL);
	printf("format : %%0x\t\targ : NULL\t\tresult : %0x$\n", NULL);
	printf("format : %%10x\t\targ : NULL\t\tresult : %10x$\n", NULL);
	printf("format : %% 10x\t\targ : NULL\t\tresult : % 10x$\n", NULL);
	printf("format : %%#10x\t\targ : NULL\t\tresult : %#10x$\n", NULL);	
	printf("format : %%010x\t\targ : NULL\t\tresult : %010x$\n", NULL);
	printf("format : %%-10x\t\targ : NULL\t\tresult : %-10x$\n", NULL);
	printf("format : %%+10x\t\targ : NULL\t\tresult : %+10x$\n", NULL);

	printf("\n< precision : zero >\n");
	printf("format : %%.0x\t\targ : 1234\t\tresult : %.0x$\n", 1234);
	printf("format : %%0.0x\t\targ : 1234\t\tresult : %0.0x$\n", 1234);
	printf("format : %%10.0x\t\targ : 1234\t\tresult : %10.0x$\n", 1234);
	printf("format : %% 10.0x\targ : 1234\t\tresult : % 10.0x$\n", 1234);
	printf("format : %%#10.0x\targ : 1234\t\tresult : %#10.0x$\n", 1234);
	printf("format : %%010.0x\targ : 1234\t\tresult : %010.0x$\n", 1234);
	printf("format : %%-10.0x\targ : 1234\t\tresult : %-10.0x$\n", 1234);
	printf("format : %%+10.0x\targ : 1234\t\tresult : %+10.0x$\n", 1234);

	printf("\n< argument & precision : NULL >\n");
	printf("format : %%.0x\t\targ : NULL\t\tresult : %.0x$\n", NULL);
	printf("format : %%0.0x\t\targ : NULL\t\tresult : %0.0x$\n", NULL);
	printf("format : %%10.0x\t\targ : NULL\t\tresult : %10.0x$\n", NULL);
	printf("format : %% 10.0x\targ : NULL\t\tresult : % 10.0x$\n", NULL);
	printf("format : %%#10.0x\targ : NULL\t\tresult : %#10.0x$\n", NULL);
	printf("format : %%010.0x\targ : NULL\t\tresult : %010.0x$\n", NULL);
	printf("format : %%-10.0x\targ : NULL\t\tresult : %-10.0x$\n", NULL);
	printf("format : %%+10.0x\targ : NULL\t\tresult : %+10.0x$\n", NULL);

	printf("\n< width & precision >\n");
	printf("format : %%5.10x\t\targ : 1234\t\tresult : %5.10x$\n", 1234);
    	printf("format : %%10.5x\t\targ : 1234\t\tresult : %10.5x$\n", 1234);
	printf("format : %%10.2x\t\targ : 1234\t\tresult : %10.2x$\n", 1234);

	printf("\n< width flags >\n");
	printf("format : %%10 x\t\targ : 1234\t\tresult : %10 x$\n", 1234);
	printf("format : %%10#x\t\targ : 1234\t\tresult : %10#x$\n", 1234);
	printf("format : %%10-x\t\targ : 1234\t\tresult : %10-x$\n", 1234);
	printf("format : %%10+x\t\targ : 1234\t\tresult : %10+x$\n", 1234);
	printf("format : %%10 0x\t\targ : 1234\t\tresult : %10 0x$\n", 1234);
	printf("format : %%10#0x\t\targ : 1234\t\tresult : %10#0x$\n", 1234);
	printf("format : %%10-0x\t\targ : 1234\t\tresult : %10-0x$\n", 1234);
	printf("format : %%10+0x\t\targ : 1234\t\tresult : %10+0x$\n", 1234);

	printf("\n< precision flags >\n");
	printf("format : %%.10x\t\targ : 1234\t\tresult : %.10x$\n", 1234);
	printf("format : %%.10 x\t\targ : 1234\t\tresult : %.10 x$\n", 1234);
	printf("format : %%.10#x\t\targ : 1234\t\tresult : %.10#x$\n", 1234);
	printf("format : %%.10-x\t\targ : 1234\t\tresult : %.10-x$\n", 1234);
	printf("format : %%.10+x\t\targ : 1234\t\tresult : %.10+x$\n", 1234);
	printf("format : %%.-10x\t\targ : 1234\t\tresult : %.-10x$\n", 1234);
	printf("format : %%.-+10x\targ : 1234\t\tresult : %.-+10x$\n", 1234);
	printf("format : %%.+-10x\targ : 1234\t\tresult : %.+-10x$\n", 1234);
	printf("format : %%.-+-10x\targ : 1234\t\tresult : %.-+-10x$\n", 1234);
	printf("format : %%.+-+10x\targ : 1234\t\tresult : %.+-+10x$\n", 1234);
	printf("format : %%.-+-+10x\targ : 1234\t\tresult : %.-+-+10x$\n", 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");


	printf("\n< argument flags : precision >\n");
	printf("format : %%.*x\t\targ : 10, 1234\t\tresult : %.*x$\n", 10, 1234);
	printf("format : %%.*x\t\targ : -10, 1234\t\tresult : %.*x$\n", -10, 1234);
	printf("format : %%.*x\t\targ : -+10, 1234\tresult : %.*x$\n", -+10, 1234);
	printf("format : %%.*x\t\targ : +-10, 1234\tresult : %.*x$\n", +-10, 1234);
	printf("format : %%.*x\t\targ : -+-10, 1234\tresult : %.*x$\n", -+-10, 1234);
	printf("format : %%.*x\t\targ : +-+10, 1234\tresult : %.*x$\n", +-+10, 1234);
	printf("format : %%.*x\t\targ : -+-+10, 1234\tresult : %.*x$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< argument flags : width >\n");
    	printf("format : %%*x\t\targ : 10, 1234\t\tresult : %*x$\n", 10, 1234);
	printf("format : %%*x\t\targ : -10, 1234\t\tresult : %*x$\n", -10, 1234);
	printf("format : %%*x\t\targ : -+10, 1234\tresult : %*x$\n", -+10, 1234);
	printf("format : %%*x\t\targ : +-10, 1234\tresult : %*x$\n", +-10, 1234);
	printf("format : %%*x\t\targ : -+-10, 1234\tresult : %*x$\n", -+-10, 1234);
	printf("format : %%*x\t\targ : +-+10, 1234\tresult : %*x$\n", +-+10, 1234);
	printf("format : %%*x\t\targ : -+-+10, 1234\tresult : %*x$\n", -+-+10, 1234);
	printf("\n*** error: lvalue required as increment operand(--, ++, ---, --+, +++, ...)\n");

	printf("\n< width & width >\n");
	printf("format : %%6-10x\t\targ : 1234\t\tresult : %6-10x$\n", 1234);
	printf("format : %%6-10+x\targ : 1234\t\tresult : %6-10+x$\n", 1234);
	printf("format : %%6+10 0x\targ : 1234\t\tresult : %6+10 0x$\n", 1234);
	printf("format : %%10+6 0x\targ : 1234\t\tresult : %10+6 0x$\n", 1234);
	printf("format : %%6+10-20x\targ : 1234\t\tresult : %6+10-20x$\n", 1234);
	printf("format : %%6+20-10x\targ : 1234\t\tresult : %6+20-10x$\n", 1234);
	printf("format : %%20*x\t\targ : 10, 1234\t\tresult : %20*x$\n", 10, 1234);	
	printf("format : %%20*6x\t\targ : 10, 1234\t\tresult : %20*6x$\n", 10, 1234);

	printf("\n< precision & width >\n");
	printf("format : %%.6-10d\targ : 1234\t\tresult : %.6-10x$\n", 1234);
    	printf("format : %%.6-10+x\targ : 1234\t\tresult : %.6-10+x$\n", 1234);
    	printf("format : %%.6+10 0x\targ : 1234\t\tresult : %.6+10 0x$\n", 1234);
    	printf("format : %%.10+6 0x\targ : 1234\t\tresult : %.10+6 0x$\n", 1234);
    	printf("format : %%.6+10-20x\targ : 1234\t\tresult : %.6+10-20x$\n", 1234);
    	printf("format : %%.6+20-10x\targ : 1234\t\tresult : %.6+20-10x$\n", 1234);
	
	printf("\n< precision & precision >\n");
    	printf("format : %%.6-.10x\targ : 1234\t\tresult : %.6-.10x$\n", 1234);
    	printf("format : %%.6-.10+x\targ : 1234\t\tresult : %.6-.10+x$\n", 1234);
    	printf("format : %%.6+.10 0x\targ : 1234\t\tresult : %.6+.10 0x$\n", 1234);
    	printf("format : %%.10+.6 0x\targ : 1234\t\tresult : %.10+.6 0x$\n", 1234);
    	printf("format : %%.6+.10-.20x\targ : 1234\t\tresult : %.6+.10-.20x$\n", 1234);
    	printf("format : %%.6+.20-.10x\targ : 1234\t\tresult : %.6+.20-.10x$\n", 1234);
	
	printf("\n< limits >\n");
	printf("format : %%x\t\targ : -1\t\tresult : %x$\n", -1);

	printf("\n\n\n");
	return 0;
}
