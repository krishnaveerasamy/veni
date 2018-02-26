#include<stdio.h>
pubic static class StringExtensions
{
   public static int NthIndexOf(this string s, int occurrence)
   {
      const string part = @"[a-zA-Z0-9]+_";
      var pattern = new StringBuilder("^");
      while(occurrence> 0)
      {
         pattern.Append(part);
         occurrence--;
      }
      var match = Regex.Match(pattern.ToString());
      return match.Success ? match.Index : -1;
   }
}
