--- scripts/translators.sh.orig	2025-05-05 14:23:21 UTC
+++ scripts/translators.sh
@@ -48,8 +48,8 @@ do
 	full_file_path="$source_dir/$1"
 	locale=${base%.po}
 
-	awk -W posix 'BEGIN {LINT = "fatal"} {if ((NF > 0) && ($1 == "'"$locale"'")) {print $0}}' "$locales"
-	awk -W posix 'BEGIN {LINT = "fatal"} $0 ~/Translators:/ {
+	awk 'BEGIN {LINT = "fatal"} {if ((NF > 0) && ($1 == "'"$locale"'")) {print $0}}' "$locales"
+	awk 'BEGIN {LINT = "fatal"} $0 ~/Translators:/ {
 		while (1) {
 			getline $0
 			if ($0 == "#")
