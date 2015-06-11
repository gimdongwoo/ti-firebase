/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/3q/djrv_55950v1m6wn_1q93krw0000gn/T/InGrowth/titanium-firebase-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/3q/djrv_55950v1m6wn_1q93krw0000gn/T/InGrowth/titanium-firebase-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.boxoutthinkers.ti.firebase.FirebasetiModule.h"


#line 13 "/private/var/folders/3q/djrv_55950v1m6wn_1q93krw0000gn/T/InGrowth/titanium-firebase-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class FirebasetiBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
FirebasetiBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
FirebasetiBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 47,
      MAX_WORD_LENGTH = 47,
      MIN_HASH_VALUE = 47,
      MAX_HASH_VALUE = 47
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 15 "/private/var/folders/3q/djrv_55950v1m6wn_1q93krw0000gn/T/InGrowth/titanium-firebase-generated/KrollGeneratedBindings.gperf"
      {"com.boxoutthinkers.ti.firebase.FirebasetiModule", ::com::boxoutthinkers::ti::firebase::FirebasetiModule::bindProxy, ::com::boxoutthinkers::ti::firebase::FirebasetiModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/3q/djrv_55950v1m6wn_1q93krw0000gn/T/InGrowth/titanium-firebase-generated/KrollGeneratedBindings.gperf"

