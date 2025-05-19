#!/bin/sh
KEYWORDS="TODO:|FIXME:|DevTeam:|XXX:"
find "${SRCROOT}" \( -name "*.h" -or -name "*.m" -or -name "*.l" -or -name "*.y" \) -print0 | xargs -0 egrep --with-filename --line-number --only-matching "($KEYWORDS).*\$" | perl -p -e "s/($KEYWORDS)/ warning: \$1/"
ERROR="ERROR:"
find "${SRCROOT}" \( -name "*.h" -or -name "*.m" -or -name "*.l" -or -name "*.y" \) -print0 | xargs -0 egrep --with-filename --line-number --only-matching "($ERROR).*\$" | perl -p -e "s/($ERROR)/ error: \$1/"



