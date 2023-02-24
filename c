[1mdiff --git a/.eslintignore b/.eslintignore[m
[1mindex 22c91e3..e50dded 100644[m
[1m--- a/.eslintignore[m
[1m+++ b/.eslintignore[m
[36m@@ -1,9 +1,9 @@[m
[31m-.github/[m
[31m-.cache/[m
[31m-.gitignore[m
[31m-.prettierignore[m
[31m-node_modules[m
[31m-build[m
[31m-public[m
[31m-*.config.js[m
[31m-[m
[32m+[m[32m.github/[m[41m[m
[32m+[m[32m.cache/[m[41m[m
[32m+[m[32m.gitignore[m[41m[m
[32m+[m[32m.prettierignore[m[41m[m
[32m+[m[32mnode_modules[m[41m[m
[32m+[m[32mbuild[m[41m[m
[32m+[m[32mpublic[m[41m[m
[32m+[m[32m*.config.js[m[41m[m
[32m+[m[41m[m
[1mdiff --git a/.eslintrc.json b/.eslintrc.json[m
[1mindex 873d191..96f0f9f 100644[m
[1m--- a/.eslintrc.json[m
[1m+++ b/.eslintrc.json[m
[36m@@ -1,37 +1,37 @@[m
[31m-{[m
[31m-    "env": {[m
[31m-        "browser": true,[m
[31m-        "es2021": true,[m
[31m-        "jest": true[m
[31m-    },[m
[31m-    "extends": [[m
[31m-        "eslint:recommended",[m
[31m-        "plugin:react/recommended",[m
[31m-        "plugin:@typescript-eslint/recommended",[m
[31m-        "prettier"[m
[31m-    ],[m
[31m-    "parser": "@typescript-eslint/parser",[m
[31m-    "parserOptions": {[m
[31m-        "ecmaFeatures": {[m
[31m-            "jsx": true[m
[31m-        },[m
[31m-        "ecmaVersion": 12,[m
[31m-        "sourceType": "module"[m
[31m-    },[m
[31m-    "plugins": [[m
[31m-        "react",[m
[31m-        "react-hooks",[m
[31m-        "@typescript-eslint",[m
[31m-        "prettier"[m
[31m-    ],[m
[31m-    "rules": {[m
[31m-        "react/react-in-jsx-scope": "off",[m
[31m-        "react/prop-types": 0,[m
[31m-        "react/display-name": "warn",[m
[31m-        "react/no-unescaped-entities": "warn",[m
[31m-        "camelcase": "error",[m
[31m-        "spaced-comment": "error",[m
[31m-        "quotes": ["error", "single"],[m
[31m-        "no-duplicate-imports": "error"[m
[31m-    }[m
[31m-}[m
[32m+[m[32m{[m[41m[m
[32m+[m[32m    "env": {[m[41m[m
[32m+[m[32m        "browser": true,[m[41m[m
[32m+[m[32m        "es2021": true,[m[41m[m
[32m+[m[32m        "jest": true[m[41m[m
[32m+[m[32m    },[m[41m[m
[32m+[m[32m    "extends": [[m[41m[m
[32m+[m[32m        "eslint:recommended",[m[41m[m
[32m+[m[32m        "plugin:react/recommended",[m[41m[m
[32m+[m[32m        "plugin:@typescript-eslint/recommended",[m[41m[m
[32m+[m[32m        "prettier"[m[41m[m
[32m+[m[32m    ],[m[41m[m
[32m+[m[32m    "parser": "@typescript-eslint/parser",[m[41m[m
[32m+[m[32m    "parserOptions": {[m[41m[m
[32m+[m[32m        "ecmaFeatures": {[m[41m[m
[32m+[m[32m            "jsx": true[m[41m[m
[32m+[m[32m        },[m[41m[m
[32m+[m[32m        "ecmaVersion": 12,[m[41m[m
[32m+[m[32m        "sourceType": "module"[m[41m[m
[32m+[m[32m    },[m[41m[m
[32m+[m[32m    "plugins": [[m[41m[m
[32m+[m[32m        "react",[m[41m[m
[32m+[m[32m        "react-hooks",[m[41m[m
[32m+[m[32m        "@typescript-eslint",[m[41m[m
[32m+[m[32m        "prettier"[m[41m[m
[32m+[m[32m    ],[m[41m[m
[32m+[m[32m    "rules": {[m[41m[m
[32m+[m[32m        "react/react-in-jsx-scope": "off",[m[41m[m
[32m+[m[32m        "react/prop-types": 0,[m[41m[m
[32m+[m[32m        "react/display-name": "warn",[m[41m[m
[32m+[m[32m        "react/no-unescaped-entities": "warn",[m[41m[m
[32m+[m[32m        "camelcase": "error",[m[41m[m
[32m+[m[32m        "spaced-comment": "error",[m[41m[m
[32m+[m[32m        "quotes": ["error", "single"],[m[41m[m
[32m+[m[32m        "no-duplicate-imports": "error"[m[41m[m
[32m+[m[32m    }[m[41m[m
[32m+[m[32m}[m[41m[m
[1mdiff --git a/.github/workflows/gatsby.yml b/.github/workflows/gatsby.yml[m
[1mindex a43ae84..9e2d0a3 100644[m
[1m--- a/.github/workflows/gatsby.yml[m
[1m+++ b/.github/workflows/gatsby.yml[m
[36m@@ -1,96 +1,96 @@[m
[31m-# Sample workflow for building and deploying a Gatsby site to GitHub Pages[m
[31m-#[m
[31m-# To get started with Gatsby see: https://www.gatsbyjs.com/docs/quick-start/[m
[31m-#[m
[31m-name: Deploy Gatsby site to Pages[m
[31m-[m
[31m-on:[m
[31m-  # Runs on pushes targeting the default branch[m
[31m-  push:[m
[31m-    branches: ["main"][m
[31m-[m
[31m-  # Allows you to run this workflow manually from the Actions tab[m
[31m-  workflow_dispatch:[m
[31m-[m
[31m-# Sets permissions of the GITHUB_TOKEN to allow deployment to GitHub Pages[m
[31m-permissions:[m
[31m-  contents: read[m
[31m-  pages: write[m
[31m-  id-token: write[m
[31m-[m
[31m-# Allow one concurrent deployment[m
[31m-concurrency:[m
[31m-  group: "pages"[m
[31m-  cancel-in-progress: true[m
[31m-[m
[31m-# Default to bash[m
[31m-defaults:[m
[31m-  run:[m
[31m-    shell: bash[m
[31m-[m
[31m-jobs:[m
[31m-  # Build job[m
[31m-  build:[m
[31m-    runs-on: ubuntu-latest[m
[31m-    steps:[m
[31m-      - name: Checkout[m
[31m-        uses: actions/checkout@v3[m
[31m-      - name: Detect package manager[m
[31m-        id: detect-package-manager[m
[31m-        run: |[m
[31m-          if [ -f "${{ github.workspace }}/yarn.lock" ]; then[m
[31m-            echo "manager=yarn" >> $GITHUB_OUTPUT[m
[31m-            echo "command=install" >> $GITHUB_OUTPUT[m
[31m-            exit 0[m
[31m-          elif [ -f "${{ github.workspace }}/package.json" ]; then[m
[31m-            echo "manager=npm" >> $GITHUB_OUTPUT[m
[31m-            echo "command=ci" >> $GITHUB_OUTPUT[m
[31m-            exit 0[m
[31m-          else[m
[31m-            echo "Unable to determine packager manager"[m
[31m-            exit 1[m
[31m-          fi[m
[31m-      - name: Setup Node[m
[31m-        uses: actions/setup-node@v3[m
[31m-        with:[m
[31m-          node-version: "18"[m
[31m-          cache: ${{ steps.detect-package-manager.outputs.manager }}[m
[31m-      - name: Setup Pages[m
[31m-        id: pages[m
[31m-        uses: actions/configure-pages@v2[m
[31m-        with:[m
[31m-          # Automatically inject pathPrefix in your Gatsby configuration file.[m
[31m-          #[m
[31m-          # You may remove this line if you want to manage the configuration yourself.[m
[31m-          static_site_generator: gatsby[m
[31m-      - name: Restore cache[m
[31m-        uses: actions/cache@v3[m
[31m-        with:[m
[31m-          path: |[m
[31m-            public[m
[31m-            .cache[m
[31m-          key: ${{ runner.os }}-gatsby-build-${{ hashFiles('public') }}[m
[31m-          restore-keys: |[m
[31m-            ${{ runner.os }}-gatsby-build-[m
[31m-      - name: Install dependencies[m
[31m-        run: ${{ steps.detect-package-manager.outputs.manager }} ${{ steps.detect-package-manager.outputs.command }}[m
[31m-      - name: Build with Gatsby[m
[31m-        env:[m
[31m-          PREFIX_PATHS: 'true'[m
[31m-        run: ${{ steps.detect-package-manager.outputs.manager }} run build[m
[31m-      - name: Upload artifact[m
[31m-        uses: actions/upload-pages-artifact@v1[m
[31m-        with:[m
[31m-          path: ./public[m
[31m-[m
[31m-  # Deployment job[m
[31m-  deploy:[m
[31m-    environment:[m
[31m-      name: github-pages[m
[31m-      url: ${{ steps.deployment.outputs.page_url }}[m
[31m-    runs-on: ubuntu-latest[m
[31m-    needs: build[m
[31m-    steps:[m
[31m-      - name: Deploy to GitHub Pages[m
[31m-        id: deployment[m
[31m-        uses: actions/deploy-pages@v1[m
[32m+[m[32m# Sample workflow for building and deploying a Gatsby site to GitHub Pages[m[41m[m
[32m+[m[32m#[m[41m[m
[32m+[m[32m# To get started with Gatsby see: https://www.gatsbyjs.com/docs/quick-start/[m[41m[m
[32m+[m[32m#[m[41m[m
[32m+[m[32mname: Deploy Gatsby site to Pages[m[41m[m
[32m+[m[41m[m
[32m+[m[32mon:[m[41m[m
[32m+[m[32m  # Runs on pushes targeting the default branch[m[41m[m
[32m+[m[32m  push:[m[41m[m
[32m+[m[32m    branches: ["main"][m[41m[m
[32m+[m[41m[m
[32m+[m[32m  # Allows you to run this workflow manually from the Actions tab[m[41m[m
[32m+[m[32m  workflow_dispatch:[m[41m[m
[32m+[m[41m[m
[32m+[m[32m# Sets permissions of the GITHUB_TOKEN to allow deployment to GitHub Pages[m[41m[m
[32m+[m[32mpermissions:[m[41m[m
[32m+[m[32m  contents: read[m[41m[m
[32m+[m[32m  pages: write[m[41m[m
[32m+[m[32m  id-token: write[m[41m[m
[32m+[m[41m[m
[32m+[m[32m# Allow one concurrent deployment[m[41m[m
[32m+[m[32mconcurrency:[m[41m[m
[32m+[m[32m  group: "pages"[m[41m[m
[32m+[m[32m  cancel-in-progress: true[m[41m[m
[32m+[m[41m[m
[32m+[m[32m# Default to bash[m[41m[m
[32m+[m[32mdefaults:[m[41m[m
[32m+[m[32m  run:[m[41m[m
[32m+[m[32m    shell: bash[m[41m[m
[32m+[m[41m[m
[32m+[m[32mjobs:[m[41m[m
[32m+[m[32m  # Build job[m[41m[m
[32m+[m[32m  build:[m[41m[m
[32m+[m[32m    runs-on: ubuntu-latest[m[41m[m
[32m+[m[32m    steps:[m[41m[m
[32m+[m[32m      - name: Checkout[m[41m[m
[32m+[m[32m        uses: actions/checkout@v3[m[41m[m
[32m+[m[32m      - name: Detect package manager[m[41m[m
[32m+[m[32m        id: detect-package-manager[m[41m[m
[32m+[m[32m        run: |[m[41m[m
[32m+[m[32m          if [ -f "${{ github.workspace }}/yarn.lock" ]; then[m[41m[m
[32m+[m[32m            echo "manager=yarn" >> $GITHUB_OUTPUT[m[41m[m
[32m+[m[32m            echo "command=install" >> $GITHUB_OUTPUT[m[41m[m
[32m+[m[32m            exit 0[m[41m[m
[32m+[m[32m          elif [ -f "${{ github.workspace }}/package.json" ]; then[m[41m[m
[32m+[m[32m            echo "manager=npm" >> $GITHUB_OUTPUT[m[41m[m
[32m+[m[32m            echo "command=ci" >> $GITHUB_OUTPUT[m[41m[m
[32m+[m[32m            exit 0[m[41m[m
[32m+[m[32m          else[m[41m[m
[32m+[m[32m            echo "Unable to determine packager manager"[m[41m[m
[32m+[m[32m            exit 1[m[41m[m
[32m+[m[32m          fi[m[41m[m
[32m+[m[32m      - name: Setup Node[m[41m[m
[32m+[m[32m        uses: actions/setup-node@v3[m[41m[m
[32m+[m[32m        with:[m[41m[m
[32m+[m[32m          node-version: "18"[m[41m[m
[32m+[m[32m          cache: ${{ steps.detect-package-manager.outputs.manager }}[m[41m[m
[32m+[m[32m      - name: Setup Pages[m[41m[m
[32m+[m[32m        id: pages[m[41m[m
[32m+[m[32m        uses: actions/configure-pages@v2[m[41m[m
[32m+[m[32m        with:[m[41m[m
[32m+[m[32m          # Automatically inject pathPrefix in your Gatsby configuration file.[m[41m[m
[32m+[m[32m          #[m[41m[m
[32m+[m[32m          # You may remove this line if you want to manage the configuration yourself.[m[41m[m
[32m+[m[32m          static_site_generator: gatsby[m[41m[m
[32m+[m[32m      - name: Restore cache[m[41m[m
[32m+[m[32m        uses: actions/cache@v3[m[41m[m
[32m+[m[32m        with:[m[41m[m
[32m+[m[32m          path: |[m[41m[m
[32m+[m[32m            public[m[41m[m
[32m+[m[32m            .cache[m[41m[m
[32m+[m[32m          key: ${{ runner.os }}-gatsby-build-${{ hashFiles('public') }}[m[41m[m
[32m+[m[32m          restore-keys: |[m[41m[m
[32m+[m[32m            ${{ runner.os }}-gatsby-build-[m[41m[m
[32m+[m[32m      - name: Install dependencies[m[41m[m
[32m+[m[32m        run: ${{ steps.detect-package-manager.outputs.manager }} ${{ steps.detect-package-manager.outputs.command }}[m[41m[m
[32m+[m[32m      - name: Build with Gatsby[m[41m[m
[32m+[m[32m        env:[m[41m[m
[32m+[m[32m          PREFIX_PATHS: 'true'[m[41m[m
[32m+[m[32m        run: ${{ steps.detect-package-manager.outputs.manager }} run build[m[41m[m
[32m+[m[32m      - name: Upload artifact[m[41m[m
[32m+[m[32m        uses: actions/upload-pages-artifact@v1[m[41m[m
[32m+[m[32m        with:[m[41m[m
[32m+[m[32m          path: ./public[m[41m[m
[32m+[m[41m[m
[32m+[m[32m  # Deployment job[m[41m[m
[32m+[m[32m  deploy:[m[41m[m
[32m+[m[32m    environment:[m[41m[m
[32m+[m[32m      name: github-pages[m[41m[m
[32m+[m[32m      url: ${{ steps.deployment.outputs.page_url }}[m[41m[m
[32m+[m[32m    runs-on: ubuntu-latest[m[41m[m
[32m+[m[32m    needs: build[m[41m[m
[32m+[m[32m    steps:[m[41m[m
[32m+[m[32m      - name: Deploy to GitHub Pages[m[41m[m
[32m+[m[32m        id: deployment[m[41m[m
[32m+[m[32m        uses: actions/deploy-pages@v1[m[41m[m
[1mdiff --git a/.github/workflows/main.yml b/.github/workflows/main.yml[m
[1mindex adf8fb1..efbfe46 100644[m
[1m--- a/.github/workflows/main.yml[m
[1m+++ b/.github/workflows/main.yml[m
[36m@@ -1,21 +1,21 @@[m
[31m-name: Gatsby Publish[m
[31m-[m
[31m-on:[m
[31m-  push:[m
[31m-    branches:[m
[31m-      - main[m
[31m-[m
[31m-jobs:[m
[31m-  build:[m
[31m-    runs-on: ubuntu-latest[m
[31m-    steps:[m
[31m-      - uses: actions/checkout@v2[m
[31m-      - name: Setup Node.js environment[m
[31m-        uses: actions/setup-node@v3.5.1[m
[31m-        with:[m
[31m-          node-version: 18.12.0[m
[31m-      - uses: enriikke/gatsby-gh-pages-action@v2[m
[31m-        with:[m
[31m-          access-token: x-access-token:${{ secrets.GITHUB_TOKEN }}[m
[31m-          deploy-branch: gh-pages[m
[31m-          gatsby-args: --prefix-paths[m
[32m+[m[32mname: Gatsby Publish[m[41m[m
[32m+[m[41m[m
[32m+[m[32mon:[m[41m[m
[32m+[m[32m  push:[m[41m[m
[32m+[m[32m    branches:[m[41m[m
[32m+[m[32m      - main[m[41m[m
[32m+[m[41m[m
[32m+[m[32mjobs:[m[41m[m
[32m+[m[32m  build:[m[41m[m
[32m+[m[32m    runs-on: ubuntu-latest[m[41m[m
[32m+[m[32m    steps:[m[41m[m
[32m+[m[32m      - uses: actions/checkout@v2[m[41m[m
[32m+[m[32m      - name: Setup Node.js environment[m[41m[m
[32m+[m[32m        uses: actions/setup-node@v3.5.1[m[41m[m
[32m+[m[32m        with:[m[41m[m
[32m+[m[32m          node-version: 18.12.0[m[41m[m
[32m+[m[32m      - uses: enriikke/gatsby-gh-pages-action@v2[m[41m[m
[32m+[m[32m        with:[m[41m[m
[32m+[m[32m          access-token: x-access-token:${{ secrets.GITHUB_TOKEN }}[m[41m[m
[32m+[m[32m          deploy-branch: gh-pages[m[41m[m
[32m+[m[32m          gatsby-args: --prefix-paths[m[41m[m
[1mdiff --git a/.gitignore b/.gitignore[m
[1mindex 89e8bb9..0762a1c 100644[m
[1m--- a/.gitignore[m
[1m+++ b/.gitignore[m
[36m@@ -1,5 +1,5 @@[m
[31m-node_modules/[m
[31m-.cache/[m
[31m-public[m
[31m-src/gatsby-types.d.ts[m
[31m-.DS_Store[m
[32m+[m[32mnode_modules/[m[41m[m
[32m+[m[32m.cache/[m[41m[m
[32m+[m[32mpublic[m[41m[m
[32m+[m[32msrc/gatsby-types.d.ts[m[41m[m
[32m+[m[32m.DS_Store[m[41m[m
[1mdiff --git a/.husky/pre-commit b/.husky/pre-commit[m
[1mindex 1c64c1a..64e99a0 100755[m
[1m--- a/.husky/pre-commit[m
[1m+++ b/.husky/pre-commit[m
[36m@@ -1,4 +1,4 @@[m
[31m-#!/usr/bin/env sh[m
[31m-. "$(dirname -- "$0")/_/husky.sh"[m
[31m-[m
[31m-npm run lint:fix && npm run format && git add -A .[m
[32m+[m[32m#!/usr/bin/env sh[m[41m[m
[32m+[m[32m. "$(dirname -- "$0")/_/husky.sh"[m[41m[m
[32m+[m[41m[m
[32m+[m[32mnpm run lint:fix && npm run format && git add -A .[m[41m[m
[1mdiff --git a/.prettierignore b/.prettierignore[m
[1mindex d57b7f8..8660321 100644[m
[1m--- a/.prettierignore[m
[1m+++ b/.prettierignore[m
[36m@@ -1,8 +1,8 @@[m
[31m-.github/[m
[31m-.cache/[m
[31m-.gitignore[m
[31m-.eslintignore[m
[31m-node_modules[m
[31m-build[m
[31m-public[m
[31m-[m
[32m+[m[32m.github/[m[41m[m
[32m+[m[32m.cache/[m[41m[m
[32m+[m[32m.gitignore[m[41m[m
[32m+[m[32m.eslintignore[m[41m[m
[32m+[m[32mnode_modules[m[41m[m
[32m+[m[32mbuild[m[41m[m
[32m+[m[32mpublic[m[41m[m
[32m+[m[41m[m
[1mdiff --git a/.prettierrc b/.prettierrc[m
[1mindex 95f5249..d0eb00b 100644[m
[1m--- a/.prettierrc[m
[1m+++ b/.prettierrc[m
[36m@@ -1,9 +1,9 @@[m
[31m-{[m
[31m-  "semi": true,[m
[31m-  "tabWidth": 2,[m
[31m-  "printWidth": 100,[m
[31m-  "singleQuote": true,[m
[31m-  "trailingComma": "all",[m
[31m-  "jsxSingleQuote": true,[m
[31m-  "bracketSpacing": true[m
[31m-}[m
[32m+[m[32m{[m[41m[m
[32m+[m[32m  "semi": true,[m[41m[m
[32m+[m[32m  "tabWidth": 2,[m[41m[m
[32m+[m[32m  "printWidth": 100,[m[41m[m
[32m+[m[32m  "singleQuote": true,[m[41m[m
[32m+[m[32m  "trailingComma": "all",[m[41m[m
[32m+[m[32m  "jsxSingleQuote": true,[m[41m[m
[32m+[m[32m  "bracketSpacing": true[m[41m[m
[32m+[m[32m}[m[41m[m
[1mdiff --git a/README.md b/README.md[m
[1mindex ce6636f..07b34e8 100644[m
[1m--- a/README.md[m
[1m+++ b/README.md[m
[36m@@ -1,95 +1,95 @@[m
[31m-<!-- AUTO-GENERATED-CONTENT:START (STARTER) -->[m
[31m-[m
[31m-![Bugs Logo](src/images/logo/bugs.gif)[m
[31m-[m
[31m-# bugs-nyu.github.io[m
[31m-[m
[31m-This is the website for BUGS, NYU's premier open source club.[m
[31m-Please take a look at our `contribution` directory.[m
[31m-[m
[31m-## How to use Gatsby[m
[31m-[m
[31m-Kick off your project with this default boilerplate. This starter ships with the main Gatsby configuration files you might need to get up and running blazing fast with the blazing fast app generator for React.[m
[31m-[m
[31m-_Have another more specific idea? You may want to check out our vibrant collection of [official and community-created starters](https://www.gatsbyjs.com/docs/gatsby-starters/)._[m
[31m-[m
[31m-### 🚀 Quick start[m
[31m-[m
[31m-1.  **Create a Gatsby site.**[m
[31m-[m
[31m-    Use the Gatsby CLI to create a new site, specifying the default starter.[m
[31m-[m
[31m-    ```shell[m
[31m-    # create a new Gatsby site using the default starter[m
[31m-    gatsby new my-default-starter https://github.com/gatsbyjs/gatsby-starter-default[m
[31m-    ```[m
[31m-[m
[31m-1.  **Start developing.**[m
[31m-[m
[31m-    Navigate into your new site’s directory and start it up.[m
[31m-[m
[31m-    ```shell[m
[31m-    cd my-default-starter/[m
[31m-    gatsby develop[m
[31m-    ```[m
[31m-[m
[31m-1.  **Open the source code and start editing!**[m
[31m-[m
[31m-    Your site is now running at `http://localhost:8000`![m
[31m-[m
[31m-    _Note: You'll also see a second link: _`http://localhost:8000/___graphql`_. This is a tool you can use to experiment with querying your data. Learn more about using this tool in the [Gatsby tutorial](https://www.gatsbyjs.com/tutorial/part-five/#introducing-graphiql)._[m
[31m-[m
[31m-    Open the `my-default-starter` directory in your code editor of choice and edit `src/pages/index.js`. Save your changes and the browser will update in real time![m
[31m-[m
[31m-### 🧐 What's inside?[m
[31m-[m
[31m-A quick look at the top-level files and directories you'll see in a Gatsby project.[m
[31m-[m
[31m-    .[m
[31m-    ├── node_modules[m
[31m-    ├── src[m
[31m-    ├── .gitignore[m
[31m-    ├── .prettierrc[m
[31m-    ├── .eslintrc.js[m
[31m-    ├── gatsby-browser.js[m
[31m-    ├── gatsby-config.js[m
[31m-    ├── gatsby-node.js[m
[31m-    ├── gatsby-ssr.js[m
[31m-    ├── LICENSE[m
[31m-    ├── package-lock.json[m
[31m-    ├── package.json[m
[31m-    └── README.md[m
[31m-[m
[31m-1.  **`/node_modules`**: This directory contains all of the modules of code that your project depends on (npm packages) are automatically installed.[m
[31m-[m
[31m-2.  **`/src`**: This directory will contain all of the code related to what you will see on the front-end of your site (what you see in the browser) such as your site header or a page template. `src` is a convention for “source code”.[m
[31m-[m
[31m-3.  **`.gitignore`**: This file tells git which files it should not track / not maintain a version history for.[m
[31m-[m
[31m-4.  **`.prettierrc`**: This is a configuration file for [Prettier](https://prettier.io/). Prettier is a tool to help keep the formatting of your code consistent.[m
[31m-[m
[31m-5.  **`.eslintrc.js`**: This is the configuration file for [eslint](https://eslint.org/). Eslint is a tool to find and fix problems within your code.[m
[31m-[m
[31m-6.  **`gatsby-browser.js`**: This file is where Gatsby expects to find any usage of the [Gatsby browser APIs](https://www.gatsbyjs.com/docs/browser-apis/) (if any). These allow customization/extension of default Gatsby settings affecting the browser.[m
[31m-[m
[31m-7.  **`gatsby-config.js`**: This is the main configuration file for a Gatsby site. This is where you can specify information about your site (metadata) like the site title and description, which Gatsby plugins you’d like to include, etc. (Check out the [config docs](https://www.gatsbyjs.com/docs/gatsby-config/) for more detail).[m
[31m-[m
[31m-8.  **`gatsby-node.js`**: This file is where Gatsby expects to find any usage of the [Gatsby Node APIs](https://www.gatsbyjs.com/docs/node-apis/) (if any). These allow customization/extension of default Gatsby settings affecting pieces of the site build process.[m
[31m-[m
[31m-9.  **`gatsby-ssr.js`**: This file is where Gatsby expects to find any usage of the [Gatsby server-side rendering APIs](https://www.gatsbyjs.com/docs/ssr-apis/) (if any). These allow customization of default Gatsby settings affecting server-side rendering.[m
[31m-[m
[31m-10. **`LICENSE`**: This Gatsby starter is licensed under the 0BSD license. This means that you can see this file as a placeholder and replace it with your own license.[m
[31m-[m
[31m-11. **`package-lock.json`** (See `package.json` below, first). This is an automatically generated file based on the exact versions of your npm dependencies that were installed for your project. **(You won’t change this file directly).**[m
[31m-[m
[31m-12. **`package.json`**: A manifest file for Node.js projects, which includes things like metadata (the project’s name, author, etc). This manifest is how npm knows which packages to install for your project.[m
[31m-[m
[31m-13. **`README.md`**: A text file containing useful reference information about your project.[m
[31m-[m
[31m-### 🎓 Learning Gatsby[m
[31m-[m
[31m-Looking for more guidance? Full documentation for Gatsby lives [on the website](https://www.gatsbyjs.com/). Here are some places to start:[m
[31m-[m
[31m-- **For most developers, we recommend starting with our [in-depth tutorial for creating a site with Gatsby](https://www.gatsbyjs.com/tutorial/).** It starts with zero assumptions about your level of ability and walks through every step of the process.[m
[31m-[m
[31m-- **To dive straight into code samples, head [to our documentation](https://www.gatsbyjs.com/docs/).** In particular, check out the _Guides_, _API Reference_, and _Advanced Tutorials_ sections in the sidebar.[m
[32m+[m[32m<!-- AUTO-GENERATED-CONTENT:START (STARTER) -->[m[41m[m
[32m+[m[41m[m
[32m+[m[32m![Bugs Logo](src/images/logo/bugs.gif)[m[41m[m
[32m+[m[41m[m
[32m+[m[32m# bugs-nyu.github.io[m[41m[m
[32m+[m[41m[m
[32m+[m[32mThis is the website for BUGS, NYU's premier open source club.[m[41m[m
[32m+[m[32mPlease take a look at our `contribution` directory.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m## How to use Gatsby[m[41m[m
[32m+[m[41m[m
[32m+[m[32mKick off your project with this default boilerplate. This starter ships with the main Gatsby configuration files you might need to get up and running blazing fast with the blazing fast app generator for React.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m_Have another more specific idea? You may want to check out our vibrant collection of [official and community-created starters](https://www.gatsbyjs.com/docs/gatsby-starters/)._[m[41m[m
[32m+[m[41m[m
[32m+[m[32m### 🚀 Quick start[m[41m[m
[32m+[m[41m[m
[32m+[m[32m1.  **Create a Gatsby site.**[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    Use the Gatsby CLI to create a new site, specifying the default starter.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    ```shell[m[41m[m
[32m+[m[32m    # create a new Gatsby site using the default starter[m[41m[m
[32m+[m[32m    gatsby new my-default-starter https://github.com/gatsbyjs/gatsby-starter-default[m[41m[m
[32m+[m[32m    ```[m[41m[m
[32m+[m[41m[m
[32m+[m[32m1.  **Start developing.**[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    Navigate into your new site’s directory and start it up.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    ```shell[m[41m[m
[32m+[m[32m    cd my-default-starter/[m[41m[m
[32m+[m[32m    gatsby develop[m[41m[m
[32m+[m[32m    ```[m[41m[m
[32m+[m[41m[m
[32m+[m[32m1.  **Open the source code and start editing!**[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    Your site is now running at `http://localhost:8000`![m[41m[m
[32m+[m[41m[m
[32m+[m[32m    _Note: You'll also see a second link: _`http://localhost:8000/___graphql`_. This is a tool you can use to experiment with querying your data. Learn more about using this tool in the [Gatsby tutorial](https://www.gatsbyjs.com/tutorial/part-five/#introducing-graphiql)._[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    Open the `my-default-starter` directory in your code editor of choice and edit `src/pages/index.js`. Save your changes and the browser will update in real time![m[41m[m
[32m+[m[41m[m
[32m+[m[32m### 🧐 What's inside?[m[41m[m
[32m+[m[41m[m
[32m+[m[32mA quick look at the top-level files and directories you'll see in a Gatsby project.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    .[m[41m[m
[32m+[m[32m    ├── node_modules[m[41m[m
[32m+[m[32m    ├── src[m[41m[m
[32m+[m[32m    ├── .gitignore[m[41m[m
[32m+[m[32m    ├── .prettierrc[m[41m[m
[32m+[m[32m    ├── .eslintrc.js[m[41m[m
[32m+[m[32m    ├── gatsby-browser.js[m[41m[m
[32m+[m[32m    ├── gatsby-config.js[m[41m[m
[32m+[m[32m    ├── gatsby-node.js[m[41m[m
[32m+[m[32m    ├── gatsby-ssr.js[m[41m[m
[32m+[m[32m    ├── LICENSE[m[41m[m
[32m+[m[32m    ├── package-lock.json[m[41m[m
[32m+[m[32m    ├── package.json[m[41m[m
[32m+[m[32m    └── README.md[m[41m[m
[32m+[m[41m[m
[32m+[m[32m1.  **`/node_modules`**: This directory contains all of the modules of code that your project depends on (npm packages) are automatically installed.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m2.  **`/src`**: This directory will contain all of the code related to what you will see on the front-end of your site (what you see in the browser) such as your site header or a page template. `src` is a convention for “source code”.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m3.  **`.gitignore`**: This file tells git which files it should not track / not maintain a version history for.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m4.  **`.prettierrc`**: This is a configuration file for [Prettier](https://prettier.io/). Prettier is a tool to help keep the formatting of your code consistent.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m5.  **`.eslintrc.js`**: This is the configuration file for [eslint](https://eslint.org/). Eslint is a tool to find and fix problems within your code.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m6.  **`gatsby-browser.js`**: This file is where Gatsby expects to find any usage of the [Gatsby browser APIs](https://www.gatsbyjs.com/docs/browser-apis/) (if any). These allow customization/extension of default Gatsby settings affecting the browser.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m7.  **`gatsby-config.js`**: This is the main configuration file for a Gatsby site. This is where you can specify information about your site (metadata) like the site title and description, which Gatsby plugins you’d like to include, etc. (Check out the [config docs](https://www.gatsbyjs.com/docs/gatsby-config/) for more detail).[m[41m[m
[32m+[m[41m[m
[32m+[m[32m8.  **`gatsby-node.js`**: This file is where Gatsby expects to find any usage of the [Gatsby Node APIs](https://www.gatsbyjs.com/docs/node-apis/) (if any). These allow customization/extension of default Gatsby settings affecting pieces of the site build process.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m9.  **`gatsby-ssr.js`**: This file is where Gatsby expects to find any usage of the [Gatsby server-side rendering APIs](https://www.gatsbyjs.com/docs/ssr-apis/) (if any). These allow customization of default Gatsby settings affecting server-side rendering.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m10. **`LICENSE`**: This Gatsby starter is licensed under the 0BSD license. This means that you can see this file as a placeholder and replace it with your own license.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m11. **`package-lock.json`** (See `package.json` below, first). This is an automatically generated file based on the exact versions of your npm dependencies that were installed for your project. **(You won’t change this file directly).**[m[41m[m
[32m+[m[41m[m
[32m+[m[32m12. **`package.json`**: A manifest file for Node.js projects, which includes things like metadata (the project’s name, author, etc). This manifest is how npm knows which packages to install for your project.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m13. **`README.md`**: A text file containing useful reference information about your project.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m### 🎓 Learning Gatsby[m[41m[m
[32m+[m[41m[m
[32m+[m[32mLooking for more guidance? Full documentation for Gatsby lives [on the website](https://www.gatsbyjs.com/). Here are some places to start:[m[41m[m
[32m+[m[41m[m
[32m+[m[32m- **For most developers, we recommend starting with our [in-depth tutorial for creating a site with Gatsby](https://www.gatsbyjs.com/tutorial/).** It starts with zero assumptions about your level of ability and walks through every step of the process.[m[41m[m
[32m+[m[41m[m
[32m+[m[32m- **To dive straight into code samples, head [to our documentation](https://www.gatsbyjs.com/docs/).** In particular, check out the _Guides_, _API Reference_, and _Advanced Tutorials_ sections in the sidebar.[m[41m[m
[1mdiff --git a/gatsby-browser.tsx b/gatsby-browser.tsx[m
[1mindex 1cd9590..04c25af 100644[m
[1m--- a/gatsby-browser.tsx[m
[1m+++ b/gatsby-browser.tsx[m
[36m@@ -1 +1 @@[m
[31m-import './src/styles/global.css';[m
[32m+[m[32mimport './src/styles/global.css';[m[41m[m
[1mdiff --git a/gatsby-config.ts b/gatsby-config.ts[m
[1mindex c2935a8..e5350fd 100644[m
[1m--- a/gatsby-config.ts[m
[1m+++ b/gatsby-config.ts[m
[36m@@ -1,51 +1,51 @@[m
[31m-import type { GatsbyConfig } from 'gatsby';[m
[31m-[m
[31m-const config: GatsbyConfig = {[m
[31m-  pathPrefix: '/',[m
[31m-  siteMetadata: {[m
[31m-    title: 'bugs-nyu.github.io',[m
[31m-    siteUrl: 'https://www.yourdomain.tld',[m
[31m-  },[m
[31m-  // More easily incorporate content into your pages through automatic TypeScript type generation and better GraphQL IntelliSense.[m
[31m-  // If you use VSCode you can also use the GraphQL plugin[m
[31m-  // Learn more at: https://gatsby.dev/graphql-typegen[m
[31m-  graphqlTypegen: true,[m
[31m-  plugins: [[m
[31m-    'gatsby-plugin-postcss',[m
[31m-    'gatsby-plugin-image',[m
[31m-    'gatsby-plugin-sitemap',[m
[31m-    {[m
[31m-      resolve: 'gatsby-plugin-manifest',[m
[31m-      options: {[m
[31m-        icon: './static/images/icon.png',[m
[31m-      },[m
[31m-    },[m
[31m-    {[m
[31m-      resolve: 'gatsby-plugin-react-svg',[m
[31m-      options: {[m
[31m-        rule: {[m
[31m-          include: /svgs/,[m
[31m-        },[m
[31m-      },[m
[31m-    },[m
[31m-    'gatsby-plugin-sharp',[m
[31m-    'gatsby-transformer-sharp',[m
[31m-    {[m
[31m-      resolve: 'gatsby-source-filesystem',[m
[31m-      options: {[m
[31m-        name: 'images',[m
[31m-        path: './static/images/',[m
[31m-      },[m
[31m-      __key: 'images',[m
[31m-    },[m
[31m-    {[m
[31m-      resolve: 'gatsby-source-filesystem',[m
[31m-      options: {[m
[31m-        name: 'members',[m
[31m-        path: './src/data/members',[m
[31m-      },[m
[31m-    },[m
[31m-  ],[m
[31m-};[m
[31m-[m
[31m-export default config;[m
[32m+[m[32mimport type { GatsbyConfig } from 'gatsby';[m[41m[m
[32m+[m[41m[m
[32m+[m[32mconst config: GatsbyConfig = {[m[41m[m
[32m+[m[32m  pathPrefix: '/',[m[41m[m
[32m+[m[32m  siteMetadata: {[m[41m[m
[32m+[m[32m    title: 'bugs-nyu.github.io',[m[41m[m
[32m+[m[32m    siteUrl: 'https://www.yourdomain.tld',[m[41m[m
[32m+[m[32m  },[m[41m[m
[32m+[m[32m  // More easily incorporate content into your pages through automatic TypeScript type generation and better GraphQL IntelliSense.[m[41m[m
[32m+[m[32m  // If you use VSCode you can also use the GraphQL plugin[m[41m[m
[32m+[m[32m  // Learn more at: https://gatsby.dev/graphql-typegen[m[41m[m
[32m+[m[32m  graphqlTypegen: true,[m[41m[m
[32m+[m[32m  plugins: [[m[41m[m
[32m+[m[32m    'gatsby-plugin-postcss',[m[41m[m
[32m+[m[32m    'gatsby-plugin-image',[m[41m[m
[32m+[m[32m    'gatsby-plugin-sitemap',[m[41m[m
[32m+[m[32m    {[m[41m[m
[32m+[m[32m      resolve: 'gatsby-plugin-manifest',[m[41m[m
[32m+[m[32m      options: {[m[41m[m
[32m+[m[32m        icon: './static/images/icon.png',[m[41m[m
[32m+[m[32m      },[m[41m[m
[32m+[m[32m    },[m[41m[m
[32m+[m[32m    {[m[41m[m
[32m+[m[32m      resolve: 'gatsby-plugin-react-svg',[m[41m[m
[32m+[m[32m      options: {[m[41m[m
[32m+[m[32m        rule: {[m[41m[m
[32m+[m[32m          include: /svgs/,[m[41m[m
[32m+[m[32m        },[m[41m[m
[32m+[m[32m      },[m[41m[m
[32m+[m[32m    },[m[41m[m
[32m+[m[32m    'gatsby-plugin-sharp',[m[41m[m
[32m+[m[32m    'gatsby-transformer-sharp',[m[41m[m
[32m+[m[32m    {[m[41m[m
[32m+[m[32m      resolve: 'gatsby-source-filesystem',[m[41m[m
[32m+[m[32m      options: {[m[41m[m
[32m+[m[32m        name: 'images',[m[41m[m
[32m+[m[32m        path: './static/images/',[m[41m[m
[32m+[m[32m      },[m[41m[m
[32m+[m[32m      __key: 'images',[m[41m[m
[32m+[m[32m    },[m[41m[m
[32m+[m[32m    {[m[41m[m
[32m+[m[32m      resolve: 'gatsby-source-filesystem',[m[41m[m
[32m+[m[32m      options: {[m[41m[m
[32m+[m[32m        name: 'members',[m[41m[m
[32m+[m[32m        path: './src/data/members',[m[41m[m
[32m+[m[32m      },[m[41m[m
[32m+[m[32m    },[m[41m[m
[32m+[m[32m  ],[m[41m[m
[32m+[m[32m};[m[41m[m
[32m+[m[41m[m
[32m+[m[32mexport default config;[m[41m[m
[1mdiff --git a/gatsby-node.ts b/gatsby-node.ts[m
[1mindex 53f5ecf..96126ff 100644[m
[1m--- a/gatsby-node.ts[m
[1m+++ b/gatsby-node.ts[m
[36m@@ -1,18 +1,18 @@[m
[31m-exports.onCreateNode = async ({ node, loadNodeContent, actions }) => {[m
[31m-  if (node.internal.mediaType !== 'text/markdown') return;[m
[31m-[m
[31m-  // Ensure Gatsby loads the item into memory so that its[m
[31m-  // content becomes available in the GraphQL File node[m
[31m-  try {[m
[31m-    const nodeContent: string = await loadNodeContent(node);[m
[31m-    const { createNodeField } = actions;[m
[31m-[m
[31m-    createNodeField({[m
[31m-      node,[m
[31m-      name: 'content',[m
[31m-      value: nodeContent.trim(),[m
[31m-    });[m
[31m-  } catch (error) {[m
[31m-    console.error(error);[m
[31m-  }[m
[31m-};[m
[32m+[m[32mexports.onCreateNode = async ({ node, loadNodeContent, actions }) => {[m[41m[m
[32m+[m[32m  if (node.internal.mediaType !== 'text/markdown') return;[m[41m[m
[32m+[m[41m[m
[32m+[m[32m  // Ensure Gatsby loads the item into memory so that its[m[41m[m
[32m+[m[32m  // content becomes available in the GraphQL File node[m[41m[m
[32m+[m[32m  try {[m[41m[m
[32m+[m[32m    const nodeContent: string = await loadNodeContent(node);[m[41m[m
[32m+[m[32m    const { createNodeField } = actions;[m[41m[m
[32m+[m[41m[m
[32m+[m[32m    createNodeField({[m[41m[m
[32m+[m[32m      node,[m[41m[m
[32m+[m[32m      name: 'content',[m[41m[m
[32m+[m[32m      value: nodeContent.trim(),[m[41m[m
[32m+[m[32m    });[m[41m[m
[32m+[m[32m  } catch (error) {[m[41m[m
[32m+[m[32m    console.error(error);[m[41m[m
[32m+[m[32m  }[m[41m[m
[32m+[m[32m};[m[41m[m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mindex d1020d3..3391721 100644[m
[1m--- a/package-lock.json[m
[1m+++ b/package-lock.json[m
[36m@@ -1,17564 +1,17564 @@[m
[31m-{[m
[31m-  "name": "bugs-nyu.github.io",[m
[31m-  "version": "1.0.0",[m
[31m-  "lockfileVersion": 3,[m
[31m-  "requires": true,[m
[31m-  "packages": {[m
[31m-    "": {[m
[31m-      "name": "bugs-nyu.github.io",[m
[31m-      "version": "1.0.0",[m
[31m-      "dependencies": {[m
[31m-        "@emotion/react": "^11.10.5",[m
[31m-        "classnames": "^2.3.2",[m
[31m-        "gatsby": "^5.0.0",[m
[31m-        "gatsby-plugin-image": "^3.0.0",[m
[31m-        "gatsby-plugin-manifest": "^5.0.0",[m
[31m-        "gatsby-plugin-react-svg": "^3.3.0",[m
[31m-        "gatsby-plugin-sharp": "^5.0.0",[m
[31m-        "gatsby-plugin-sitemap": "^6.0.0",[m
[31m-        "gatsby-source-filesystem": "^5.7.0",[m
[31m-        "gatsby-transformer-sharp": "^5.0.0",[m
[31m-        "iconoir-react": "^6.2.1",[m
[31m-        "react": "^18.2.0",[m
[31m-        "react-dom": "^18.2.0"[m
[31m-      },[m
[31m-      "devDependencies": {[m
[31m-        "@types/node": "^18.11.9",[m
[31m-        "@types/react": "^18.0.25",[m
[31m-        "@types/react-dom": "^18.0.8",[m
[31m-        "@typescript-eslint/eslint-plugin": "^5.43.0",[m
[31m-        "@typescript-eslint/parser": "^5.43.0",[m
[31m-        "autoprefixer": "^10.4.13",[m
[31m-        "eslint": "^7.32.0",[m
[31m-        "eslint-config-prettier": "^8.5.0",[m
[31m-        "eslint-plugin-prettier": "^4.2.1",[m
[31m-        "eslint-plugin-react": "^7.31.11",[m
[31m-        "eslint-plugin-react-hooks": "^4.6.0",[m
[31m-        "gatsby-plugin-postcss": "^6.0.0",[m
[31m-        "gh-pages": "^4.0.0",[m
[31m-        "husky": "^8.0.0",[m
[31m-        "postcss": "^8.4.19",[m
[31m-        "prettier": "^2.7.1",[m
[31m-        "tailwindcss": "^3.2.4",[m
[31m-        "typescript": "^4.8.4"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@ampproject/remapping": {[m
[31m-      "version": "2.2.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@ampproject/remapping/-/remapping-2.2.0.tgz",[m
[31m-      "integrity": "sha512-qRmjj8nj9qmLTQXXmaR1cck3UXSRMPrbsLJAasZpF+t3riI71BXed5ebIOYwQntykeZuhjsdweEc9BxH5Jc26w==",[m
[31m-      "dependencies": {[m
[31m-        "@jridgewell/gen-mapping": "^0.1.0",[m
[31m-        "@jridgewell/trace-mapping": "^0.3.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@ardatan/relay-compiler": {[m
[31m-      "version": "12.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@ardatan/relay-compiler/-/relay-compiler-12.0.0.tgz",[m
[31m-      "integrity": "sha512-9anThAaj1dQr6IGmzBMcfzOQKTa5artjuPmw8NYK/fiGEMjADbSguBY2FMDykt+QhilR3wc9VA/3yVju7JHg7Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/core": "^7.14.0",[m
[31m-        "@babel/generator": "^7.14.0",[m
[31m-        "@babel/parser": "^7.14.0",[m
[31m-        "@babel/runtime": "^7.0.0",[m
[31m-        "@babel/traverse": "^7.14.0",[m
[31m-        "@babel/types": "^7.0.0",[m
[31m-        "babel-preset-fbjs": "^3.4.0",[m
[31m-        "chalk": "^4.0.0",[m
[31m-        "fb-watchman": "^2.0.0",[m
[31m-        "fbjs": "^3.0.0",[m
[31m-        "glob": "^7.1.1",[m
[31m-        "immutable": "~3.7.6",[m
[31m-        "invariant": "^2.2.4",[m
[31m-        "nullthrows": "^1.1.1",[m
[31m-        "relay-runtime": "12.0.0",[m
[31m-        "signedsource": "^1.0.0",[m
[31m-        "yargs": "^15.3.1"[m
[31m-      },[m
[31m-      "bin": {[m
[31m-        "relay-compiler": "bin/relay-compiler"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "graphql": "*"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@ardatan/relay-compiler/node_modules/ansi-styles": {[m
[31m-      "version": "4.3.0",[m
[31m-      "resolved": "https://registry.npmjs.org/ansi-styles/-/ansi-styles-4.3.0.tgz",[m
[31m-      "integrity": "sha512-zbB9rCJAT1rbjiVDb2hqKFHNYLxgtk8NURxZ3IZwD3F6NtxbXZQCnnSi1Lkx+IDohdPlFp222wVALIheZJQSEg==",[m
[31m-      "dependencies": {[m
[31m-        "color-convert": "^2.0.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/chalk/ansi-styles?sponsor=1"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@ardatan/relay-compiler/node_modules/chalk": {[m
[31m-      "version": "4.1.2",[m
[31m-      "resolved": "https://registry.npmjs.org/chalk/-/chalk-4.1.2.tgz",[m
[31m-      "integrity": "sha512-oKnbhFyRIXpUuez8iBMmyEa4nbj4IOQyuhc/wy9kY7/WVPcwIO9VA668Pu8RkO7+0G76SLROeyw9CpQ061i4mA==",[m
[31m-      "dependencies": {[m
[31m-        "ansi-styles": "^4.1.0",[m
[31m-        "supports-color": "^7.1.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/chalk/chalk?sponsor=1"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@ardatan/relay-compiler/node_modules/color-convert": {[m
[31m-      "version": "2.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/color-convert/-/color-convert-2.0.1.tgz",[m
[31m-      "integrity": "sha512-RRECPsj7iu/xb5oKYcsFHSppFNnsj/52OVTRKb4zP5onXwVF3zVmmToNcOfGC+CRDpfK/U584fMg38ZHCaElKQ==",[m
[31m-      "dependencies": {[m
[31m-        "color-name": "~1.1.4"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@ardatan/relay-compiler/node_modules/color-name": {[m
[31m-      "version": "1.1.4",[m
[31m-      "resolved": "https://registry.npmjs.org/color-name/-/color-name-1.1.4.tgz",[m
[31m-      "integrity": "sha512-dOy+3AuW3a2wNbZHIuMZpTcgjGuLU/uBL/ubcZF9OXbDo8ff4O8yVp5Bf0efS8uEoYo5q4Fx7dY9OgQGXgAsQA=="[m
[31m-    },[m
[31m-    "node_modules/@ardatan/relay-compiler/node_modules/has-flag": {[m
[31m-      "version": "4.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/has-flag/-/has-flag-4.0.0.tgz",[m
[31m-      "integrity": "sha512-EykJT/Q1KjTWctppgIAgfSO0tKVuZUjhgMr17kqTumMl6Afv3EISleU7qZUzoXDFTAHTDC4NOoG/ZxU3EvlMPQ==",[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@ardatan/relay-compiler/node_modules/supports-color": {[m
[31m-      "version": "7.2.0",[m
[31m-      "resolved": "https://registry.npmjs.org/supports-color/-/supports-color-7.2.0.tgz",[m
[31m-      "integrity": "sha512-qpCAvRl9stuOHveKsn7HncJRvv501qIacKzQlO/+Lwxc9+0q2wLyv4Dfvt80/DPn2pqOBsJdDiogXGR9+OvwRw==",[m
[31m-      "dependencies": {[m
[31m-        "has-flag": "^4.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/code-frame": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/code-frame/-/code-frame-7.18.6.tgz",[m
[31m-      "integrity": "sha512-TDCmlK5eOvH+eH7cdAFlNXeVJqWIQ7gW9tY1GJIpUtFb6CmjVyq2VM3u71bOyR8CRihcCgMUYoDNyLXao3+70Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/highlight": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/compat-data": {[m
[31m-      "version": "7.20.14",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/compat-data/-/compat-data-7.20.14.tgz",[m
[31m-      "integrity": "sha512-0YpKHD6ImkWMEINCyDAD0HLLUH/lPCefG8ld9it8DJB2wnApraKuhgYTvTY1z7UFIfBTGy5LwncZ+5HWWGbhFw==",[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/core": {[m
[31m-      "version": "7.20.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/core/-/core-7.20.12.tgz",[m
[31m-      "integrity": "sha512-XsMfHovsUYHFMdrIHkZphTN/2Hzzi78R08NuHfDBehym2VsPDL6Zn/JAD/JQdnRvbSsbQc4mVaU1m6JgtTEElg==",[m
[31m-      "dependencies": {[m
[31m-        "@ampproject/remapping": "^2.1.0",[m
[31m-        "@babel/code-frame": "^7.18.6",[m
[31m-        "@babel/generator": "^7.20.7",[m
[31m-        "@babel/helper-compilation-targets": "^7.20.7",[m
[31m-        "@babel/helper-module-transforms": "^7.20.11",[m
[31m-        "@babel/helpers": "^7.20.7",[m
[31m-        "@babel/parser": "^7.20.7",[m
[31m-        "@babel/template": "^7.20.7",[m
[31m-        "@babel/traverse": "^7.20.12",[m
[31m-        "@babel/types": "^7.20.7",[m
[31m-        "convert-source-map": "^1.7.0",[m
[31m-        "debug": "^4.1.0",[m
[31m-        "gensync": "^1.0.0-beta.2",[m
[31m-        "json5": "^2.2.2",[m
[31m-        "semver": "^6.3.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "type": "opencollective",[m
[31m-        "url": "https://opencollective.com/babel"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/eslint-parser": {[m
[31m-      "version": "7.19.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/eslint-parser/-/eslint-parser-7.19.1.tgz",[m
[31m-      "integrity": "sha512-AqNf2QWt1rtu2/1rLswy6CDP7H9Oh3mMhk177Y67Rg8d7RD9WfOLLv8CGn6tisFvS2htm86yIe1yLF6I1UDaGQ==",[m
[31m-      "dependencies": {[m
[31m-        "@nicolo-ribaudo/eslint-scope-5-internals": "5.1.1-v1",[m
[31m-        "eslint-visitor-keys": "^2.1.0",[m
[31m-        "semver": "^6.3.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^10.13.0 || ^12.13.0 || >=14.0.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": ">=7.11.0",[m
[31m-        "eslint": "^7.5.0 || ^8.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/eslint-parser/node_modules/eslint-visitor-keys": {[m
[31m-      "version": "2.1.0",[m
[31m-      "resolved": "https://registry.npmjs.org/eslint-visitor-keys/-/eslint-visitor-keys-2.1.0.tgz",[m
[31m-      "integrity": "sha512-0rSmRBzXgDzIsD6mGdJgevzgezI534Cer5L/vyMX0kHzT/jiB43jRhd9YUlMGYLQy2zprNmoT8qasCGtY+QaKw==",[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/generator": {[m
[31m-      "version": "7.20.14",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/generator/-/generator-7.20.14.tgz",[m
[31m-      "integrity": "sha512-AEmuXHdcD3A52HHXxaTmYlb8q/xMEhoRP67B3T4Oq7lbmSoqroMZzjnGj3+i1io3pdnF8iBYVu4Ilj+c4hBxYg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.20.7",[m
[31m-        "@jridgewell/gen-mapping": "^0.3.2",[m
[31m-        "jsesc": "^2.5.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/generator/node_modules/@jridgewell/gen-mapping": {[m
[31m-      "version": "0.3.2",[m
[31m-      "resolved": "https://registry.npmjs.org/@jridgewell/gen-mapping/-/gen-mapping-0.3.2.tgz",[m
[31m-      "integrity": "sha512-mh65xKQAzI6iBcFzwv28KVWSmCkdRBWoOh+bYQGW3+6OZvbbN3TqMGo5hqYxQniRcH9F2VZIoJCm4pa3BPDK/A==",[m
[31m-      "dependencies": {[m
[31m-        "@jridgewell/set-array": "^1.0.1",[m
[31m-        "@jridgewell/sourcemap-codec": "^1.4.10",[m
[31m-        "@jridgewell/trace-mapping": "^0.3.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-annotate-as-pure": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-annotate-as-pure/-/helper-annotate-as-pure-7.18.6.tgz",[m
[31m-      "integrity": "sha512-duORpUiYrEpzKIop6iNbjnwKLAKnJ47csTyRACyEmWj0QdUrm5aqNJGHSSEQSUAvNW0ojX0dOmK9dZduvkfeXA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-builder-binary-assignment-operator-visitor": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-builder-binary-assignment-operator-visitor/-/helper-builder-binary-assignment-operator-visitor-7.18.9.tgz",[m
[31m-      "integrity": "sha512-yFQ0YCHoIqarl8BCRwBL8ulYUaZpz3bNsA7oFepAzee+8/+ImtADXNOmO5vJvsPff3qi+hvpkY/NYBTrBQgdNw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-explode-assignable-expression": "^7.18.6",[m
[31m-        "@babel/types": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-compilation-targets": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-compilation-targets/-/helper-compilation-targets-7.20.7.tgz",[m
[31m-      "integrity": "sha512-4tGORmfQcrc+bvrjb5y3dG9Mx1IOZjsHqQVUz7XCNHO+iTmqxWnVg3KRygjGmpRLJGdQSKuvFinbIb0CnZwHAQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/compat-data": "^7.20.5",[m
[31m-        "@babel/helper-validator-option": "^7.18.6",[m
[31m-        "browserslist": "^4.21.3",[m
[31m-        "lru-cache": "^5.1.1",[m
[31m-        "semver": "^6.3.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-create-class-features-plugin": {[m
[31m-      "version": "7.20.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-create-class-features-plugin/-/helper-create-class-features-plugin-7.20.12.tgz",[m
[31m-      "integrity": "sha512-9OunRkbT0JQcednL0UFvbfXpAsUXiGjUk0a7sN8fUXX7Mue79cUSMjHGDRRi/Vz9vYlpIhLV5fMD5dKoMhhsNQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-annotate-as-pure": "^7.18.6",[m
[31m-        "@babel/helper-environment-visitor": "^7.18.9",[m
[31m-        "@babel/helper-function-name": "^7.19.0",[m
[31m-        "@babel/helper-member-expression-to-functions": "^7.20.7",[m
[31m-        "@babel/helper-optimise-call-expression": "^7.18.6",[m
[31m-        "@babel/helper-replace-supers": "^7.20.7",[m
[31m-        "@babel/helper-skip-transparent-expression-wrappers": "^7.20.0",[m
[31m-        "@babel/helper-split-export-declaration": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-create-regexp-features-plugin": {[m
[31m-      "version": "7.20.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-create-regexp-features-plugin/-/helper-create-regexp-features-plugin-7.20.5.tgz",[m
[31m-      "integrity": "sha512-m68B1lkg3XDGX5yCvGO0kPx3v9WIYLnzjKfPcQiwntEQa5ZeRkPmo2X/ISJc8qxWGfwUr+kvZAeEzAwLec2r2w==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-annotate-as-pure": "^7.18.6",[m
[31m-        "regexpu-core": "^5.2.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-define-polyfill-provider": {[m
[31m-      "version": "0.3.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-define-polyfill-provider/-/helper-define-polyfill-provider-0.3.3.tgz",[m
[31m-      "integrity": "sha512-z5aQKU4IzbqCC1XH0nAqfsFLMVSo22SBKUc0BxGrLkolTdPTructy0ToNnlO2zA4j9Q/7pjMZf0DSY+DSTYzww==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-compilation-targets": "^7.17.7",[m
[31m-        "@babel/helper-plugin-utils": "^7.16.7",[m
[31m-        "debug": "^4.1.1",[m
[31m-        "lodash.debounce": "^4.0.8",[m
[31m-        "resolve": "^1.14.2",[m
[31m-        "semver": "^6.1.2"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.4.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-environment-visitor": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-environment-visitor/-/helper-environment-visitor-7.18.9.tgz",[m
[31m-      "integrity": "sha512-3r/aACDJ3fhQ/EVgFy0hpj8oHyHpQc+LPtJoY9SzTThAsStm4Ptegq92vqKoE3vD706ZVFWITnMnxucw+S9Ipg==",[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-explode-assignable-expression": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-explode-assignable-expression/-/helper-explode-assignable-expression-7.18.6.tgz",[m
[31m-      "integrity": "sha512-eyAYAsQmB80jNfg4baAtLeWAQHfHFiR483rzFK+BhETlGZaQC9bsfrugfXDCbRHLQbIA7U5NxhhOxN7p/dWIcg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-function-name": {[m
[31m-      "version": "7.19.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-function-name/-/helper-function-name-7.19.0.tgz",[m
[31m-      "integrity": "sha512-WAwHBINyrpqywkUH0nTnNgI5ina5TFn85HKS0pbPDfxFfhyR/aNQEn4hGi1P1JyT//I0t4OgXUlofzWILRvS5w==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/template": "^7.18.10",[m
[31m-        "@babel/types": "^7.19.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-hoist-variables": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-hoist-variables/-/helper-hoist-variables-7.18.6.tgz",[m
[31m-      "integrity": "sha512-UlJQPkFqFULIcyW5sbzgbkxn2FKRgwWiRexcuaR8RNJRy8+LLveqPjwZV/bwrLZCN0eUHD/x8D0heK1ozuoo6Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-member-expression-to-functions": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-member-expression-to-functions/-/helper-member-expression-to-functions-7.20.7.tgz",[m
[31m-      "integrity": "sha512-9J0CxJLq315fEdi4s7xK5TQaNYjZw+nDVpVqr1axNGKzdrdwYBD5b4uKv3n75aABG0rCCTK8Im8Ww7eYfMrZgw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-module-imports": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-module-imports/-/helper-module-imports-7.18.6.tgz",[m
[31m-      "integrity": "sha512-0NFvs3VkuSYbFi1x2Vd6tKrywq+z/cLeYC/RJNFrIX/30Bf5aiGYbtvGXolEktzJH8o5E5KJ3tT+nkxuuZFVlA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-module-transforms": {[m
[31m-      "version": "7.20.11",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-module-transforms/-/helper-module-transforms-7.20.11.tgz",[m
[31m-      "integrity": "sha512-uRy78kN4psmji1s2QtbtcCSaj/LILFDp0f/ymhpQH5QY3nljUZCaNWz9X1dEj/8MBdBEFECs7yRhKn8i7NjZgg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-environment-visitor": "^7.18.9",[m
[31m-        "@babel/helper-module-imports": "^7.18.6",[m
[31m-        "@babel/helper-simple-access": "^7.20.2",[m
[31m-        "@babel/helper-split-export-declaration": "^7.18.6",[m
[31m-        "@babel/helper-validator-identifier": "^7.19.1",[m
[31m-        "@babel/template": "^7.20.7",[m
[31m-        "@babel/traverse": "^7.20.10",[m
[31m-        "@babel/types": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-optimise-call-expression": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-optimise-call-expression/-/helper-optimise-call-expression-7.18.6.tgz",[m
[31m-      "integrity": "sha512-HP59oD9/fEHQkdcbgFCnbmgH5vIQTJbxh2yf+CdM89/glUNnuzr87Q8GIjGEnOktTROemO0Pe0iPAYbqZuOUiA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-plugin-utils": {[m
[31m-      "version": "7.20.2",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-plugin-utils/-/helper-plugin-utils-7.20.2.tgz",[m
[31m-      "integrity": "sha512-8RvlJG2mj4huQ4pZ+rU9lqKi9ZKiRmuvGuM2HlWmkmgOhbs6zEAw6IEiJ5cQqGbDzGZOhwuOQNtZMi/ENLjZoQ==",[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-remap-async-to-generator": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-remap-async-to-generator/-/helper-remap-async-to-generator-7.18.9.tgz",[m
[31m-      "integrity": "sha512-dI7q50YKd8BAv3VEfgg7PS7yD3Rtbi2J1XMXaalXO0W0164hYLnh8zpjRS0mte9MfVp/tltvr/cfdXPvJr1opA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-annotate-as-pure": "^7.18.6",[m
[31m-        "@babel/helper-environment-visitor": "^7.18.9",[m
[31m-        "@babel/helper-wrap-function": "^7.18.9",[m
[31m-        "@babel/types": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-replace-supers": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-replace-supers/-/helper-replace-supers-7.20.7.tgz",[m
[31m-      "integrity": "sha512-vujDMtB6LVfNW13jhlCrp48QNslK6JXi7lQG736HVbHz/mbf4Dc7tIRh1Xf5C0rF7BP8iiSxGMCmY6Ci1ven3A==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-environment-visitor": "^7.18.9",[m
[31m-        "@babel/helper-member-expression-to-functions": "^7.20.7",[m
[31m-        "@babel/helper-optimise-call-expression": "^7.18.6",[m
[31m-        "@babel/template": "^7.20.7",[m
[31m-        "@babel/traverse": "^7.20.7",[m
[31m-        "@babel/types": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-simple-access": {[m
[31m-      "version": "7.20.2",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-simple-access/-/helper-simple-access-7.20.2.tgz",[m
[31m-      "integrity": "sha512-+0woI/WPq59IrqDYbVGfshjT5Dmk/nnbdpcF8SnMhhXObpTq2KNBdLFRFrkVdbDOyUmHBCxzm5FHV1rACIkIbA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-skip-transparent-expression-wrappers": {[m
[31m-      "version": "7.20.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-skip-transparent-expression-wrappers/-/helper-skip-transparent-expression-wrappers-7.20.0.tgz",[m
[31m-      "integrity": "sha512-5y1JYeNKfvnT8sZcK9DVRtpTbGiomYIHviSP3OQWmDPU3DeH4a1ZlT/N2lyQ5P8egjcRaT/Y9aNqUxK0WsnIIg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.20.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-split-export-declaration": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-split-export-declaration/-/helper-split-export-declaration-7.18.6.tgz",[m
[31m-      "integrity": "sha512-bde1etTx6ZyTmobl9LLMMQsaizFVZrquTEHOqKeQESMKo4PlObf+8+JA25ZsIpZhT/WEd39+vOdLXAFG/nELpA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-string-parser": {[m
[31m-      "version": "7.19.4",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-string-parser/-/helper-string-parser-7.19.4.tgz",[m
[31m-      "integrity": "sha512-nHtDoQcuqFmwYNYPz3Rah5ph2p8PFeFCsZk9A/48dPc/rGocJ5J3hAAZ7pb76VWX3fZKu+uEr/FhH5jLx7umrw==",[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-validator-identifier": {[m
[31m-      "version": "7.19.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-validator-identifier/-/helper-validator-identifier-7.19.1.tgz",[m
[31m-      "integrity": "sha512-awrNfaMtnHUr653GgGEs++LlAvW6w+DcPrOliSMXWCKo597CwL5Acf/wWdNkf/tfEQE3mjkeD1YOVZOUV/od1w==",[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-validator-option": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-validator-option/-/helper-validator-option-7.18.6.tgz",[m
[31m-      "integrity": "sha512-XO7gESt5ouv/LRJdrVjkShckw6STTaB7l9BrpBaAHDeF5YZT+01PCwmR0SJHnkW6i8OwW/EVWRShfi4j2x+KQw==",[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helper-wrap-function": {[m
[31m-      "version": "7.20.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helper-wrap-function/-/helper-wrap-function-7.20.5.tgz",[m
[31m-      "integrity": "sha512-bYMxIWK5mh+TgXGVqAtnu5Yn1un+v8DDZtqyzKRLUzrh70Eal2O3aZ7aPYiMADO4uKlkzOiRiZ6GX5q3qxvW9Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-function-name": "^7.19.0",[m
[31m-        "@babel/template": "^7.18.10",[m
[31m-        "@babel/traverse": "^7.20.5",[m
[31m-        "@babel/types": "^7.20.5"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/helpers": {[m
[31m-      "version": "7.20.13",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/helpers/-/helpers-7.20.13.tgz",[m
[31m-      "integrity": "sha512-nzJ0DWCL3gB5RCXbUO3KIMMsBY2Eqbx8mBpKGE/02PgyRQFcPQLbkQ1vyy596mZLaP+dAfD+R4ckASzNVmW3jg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/template": "^7.20.7",[m
[31m-        "@babel/traverse": "^7.20.13",[m
[31m-        "@babel/types": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/highlight": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/highlight/-/highlight-7.18.6.tgz",[m
[31m-      "integrity": "sha512-u7stbOuYjaPezCuLj29hNW1v64M2Md2qupEKP1fHc7WdOA3DgLh37suiSrZYY7haUB7iBeQZ9P1uiRF359do3g==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-validator-identifier": "^7.18.6",[m
[31m-        "chalk": "^2.0.0",[m
[31m-        "js-tokens": "^4.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/parser": {[m
[31m-      "version": "7.20.15",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/parser/-/parser-7.20.15.tgz",[m
[31m-      "integrity": "sha512-DI4a1oZuf8wC+oAJA9RW6ga3Zbe8RZFt7kD9i4qAspz3I/yHet1VvC3DiSy/fsUvv5pvJuNPh0LPOdCcqinDPg==",[m
[31m-      "bin": {[m
[31m-        "parser": "bin/babel-parser.js"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-bugfix-safari-id-destructuring-collision-in-function-expression": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-bugfix-safari-id-destructuring-collision-in-function-expression/-/plugin-bugfix-safari-id-destructuring-collision-in-function-expression-7.18.6.tgz",[m
[31m-      "integrity": "sha512-Dgxsyg54Fx1d4Nge8UnvTrED63vrwOdPmyvPzlNN/boaliRP54pm3pGzZD1SJUwrBA+Cs/xdG8kXX6Mn/RfISQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-bugfix-v8-spread-parameters-in-optional-chaining": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-bugfix-v8-spread-parameters-in-optional-chaining/-/plugin-bugfix-v8-spread-parameters-in-optional-chaining-7.20.7.tgz",[m
[31m-      "integrity": "sha512-sbr9+wNE5aXMBBFBICk01tt7sBf2Oc9ikRFEcem/ZORup9IMUdNhW7/wVLEbbtlWOsEubJet46mHAL2C8+2jKQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-skip-transparent-expression-wrappers": "^7.20.0",[m
[31m-        "@babel/plugin-proposal-optional-chaining": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.13.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-async-generator-functions": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-async-generator-functions/-/plugin-proposal-async-generator-functions-7.20.7.tgz",[m
[31m-      "integrity": "sha512-xMbiLsn/8RK7Wq7VeVytytS2L6qE69bXPB10YCmMdDZbKF4okCqY74pI/jJQ/8U0b/F6NrT2+14b8/P9/3AMGA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-environment-visitor": "^7.18.9",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-remap-async-to-generator": "^7.18.9",[m
[31m-        "@babel/plugin-syntax-async-generators": "^7.8.4"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-class-properties": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-class-properties/-/plugin-proposal-class-properties-7.18.6.tgz",[m
[31m-      "integrity": "sha512-cumfXOF0+nzZrrN8Rf0t7M+tF6sZc7vhQwYQck9q1/5w2OExlD+b4v4RpMJFaV1Z7WcDRgO6FqvxqxGlwo+RHQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-class-features-plugin": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-class-static-block": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-class-static-block/-/plugin-proposal-class-static-block-7.20.7.tgz",[m
[31m-      "integrity": "sha512-AveGOoi9DAjUYYuUAG//Ig69GlazLnoyzMw68VCDux+c1tsnnH/OkYcpz/5xzMkEFC6UxjR5Gw1c+iY2wOGVeQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-class-features-plugin": "^7.20.7",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/plugin-syntax-class-static-block": "^7.14.5"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.12.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-dynamic-import": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-dynamic-import/-/plugin-proposal-dynamic-import-7.18.6.tgz",[m
[31m-      "integrity": "sha512-1auuwmK+Rz13SJj36R+jqFPMJWyKEDd7lLSdOj4oJK0UTgGueSAtkrCvz9ewmgyU/P941Rv2fQwZJN8s6QruXw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/plugin-syntax-dynamic-import": "^7.8.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-export-namespace-from": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-export-namespace-from/-/plugin-proposal-export-namespace-from-7.18.9.tgz",[m
[31m-      "integrity": "sha512-k1NtHyOMvlDDFeb9G5PhUXuGj8m/wiwojgQVEhJ/fsVsMCpLyOP4h0uGEjYJKrRI+EVPlb5Jk+Gt9P97lOGwtA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.9",[m
[31m-        "@babel/plugin-syntax-export-namespace-from": "^7.8.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-json-strings": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-json-strings/-/plugin-proposal-json-strings-7.18.6.tgz",[m
[31m-      "integrity": "sha512-lr1peyn9kOdbYc0xr0OdHTZ5FMqS6Di+H0Fz2I/JwMzGmzJETNeOFq2pBySw6X/KFL5EWDjlJuMsUGRFb8fQgQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/plugin-syntax-json-strings": "^7.8.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-logical-assignment-operators": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-logical-assignment-operators/-/plugin-proposal-logical-assignment-operators-7.20.7.tgz",[m
[31m-      "integrity": "sha512-y7C7cZgpMIjWlKE5T7eJwp+tnRYM89HmRvWM5EQuB5BoHEONjmQ8lSNmBUwOyy/GFRsohJED51YBF79hE1djug==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/plugin-syntax-logical-assignment-operators": "^7.10.4"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-nullish-coalescing-operator": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-nullish-coalescing-operator/-/plugin-proposal-nullish-coalescing-operator-7.18.6.tgz",[m
[31m-      "integrity": "sha512-wQxQzxYeJqHcfppzBDnm1yAY0jSRkUXR2z8RePZYrKwMKgMlE8+Z6LUno+bd6LvbGh8Gltvy74+9pIYkr+XkKA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/plugin-syntax-nullish-coalescing-operator": "^7.8.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-numeric-separator": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-numeric-separator/-/plugin-proposal-numeric-separator-7.18.6.tgz",[m
[31m-      "integrity": "sha512-ozlZFogPqoLm8WBr5Z8UckIoE4YQ5KESVcNudyXOR8uqIkliTEgJ3RoketfG6pmzLdeZF0H/wjE9/cCEitBl7Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/plugin-syntax-numeric-separator": "^7.10.4"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-object-rest-spread": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-object-rest-spread/-/plugin-proposal-object-rest-spread-7.20.7.tgz",[m
[31m-      "integrity": "sha512-d2S98yCiLxDVmBmE8UjGcfPvNEUbA1U5q5WxaWFUGRzJSVAZqm5W6MbPct0jxnegUZ0niLeNX+IOzEs7wYg9Dg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/compat-data": "^7.20.5",[m
[31m-        "@babel/helper-compilation-targets": "^7.20.7",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/plugin-syntax-object-rest-spread": "^7.8.3",[m
[31m-        "@babel/plugin-transform-parameters": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-optional-catch-binding": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-optional-catch-binding/-/plugin-proposal-optional-catch-binding-7.18.6.tgz",[m
[31m-      "integrity": "sha512-Q40HEhs9DJQyaZfUjjn6vE8Cv4GmMHCYuMGIWUnlxH6400VGxOuwWsPt4FxXxJkC/5eOzgn0z21M9gMT4MOhbw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/plugin-syntax-optional-catch-binding": "^7.8.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-optional-chaining": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-optional-chaining/-/plugin-proposal-optional-chaining-7.20.7.tgz",[m
[31m-      "integrity": "sha512-T+A7b1kfjtRM51ssoOfS1+wbyCVqorfyZhT99TvxxLMirPShD8CzKMRepMlCBGM5RpHMbn8s+5MMHnPstJH6mQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-skip-transparent-expression-wrappers": "^7.20.0",[m
[31m-        "@babel/plugin-syntax-optional-chaining": "^7.8.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-private-methods": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-private-methods/-/plugin-proposal-private-methods-7.18.6.tgz",[m
[31m-      "integrity": "sha512-nutsvktDItsNn4rpGItSNV2sz1XwS+nfU0Rg8aCx3W3NOKVzdMjJRu0O5OkgDp3ZGICSTbgRpxZoWsxoKRvbeA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-class-features-plugin": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-private-property-in-object": {[m
[31m-      "version": "7.20.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-private-property-in-object/-/plugin-proposal-private-property-in-object-7.20.5.tgz",[m
[31m-      "integrity": "sha512-Vq7b9dUA12ByzB4EjQTPo25sFhY+08pQDBSZRtUAkj7lb7jahaHR5igera16QZ+3my1nYR4dKsNdYj5IjPHilQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-annotate-as-pure": "^7.18.6",[m
[31m-        "@babel/helper-create-class-features-plugin": "^7.20.5",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/plugin-syntax-private-property-in-object": "^7.14.5"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-proposal-unicode-property-regex": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-proposal-unicode-property-regex/-/plugin-proposal-unicode-property-regex-7.18.6.tgz",[m
[31m-      "integrity": "sha512-2BShG/d5yoZyXZfVePH91urL5wTG6ASZU9M4o03lKK8u8UW1y08OMttBSOADTcJrnPMpvDXRG3G8fyLh4ovs8w==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-regexp-features-plugin": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=4"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-async-generators": {[m
[31m-      "version": "7.8.4",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-async-generators/-/plugin-syntax-async-generators-7.8.4.tgz",[m
[31m-      "integrity": "sha512-tycmZxkGfZaxhMRbXlPXuVFpdWlXpir2W4AMhSJgRKzk/eDlIXOhb2LHWoLpDF7TEHylV5zNhykX6KAgHJmTNw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-class-properties": {[m
[31m-      "version": "7.12.13",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-class-properties/-/plugin-syntax-class-properties-7.12.13.tgz",[m
[31m-      "integrity": "sha512-fm4idjKla0YahUNgFNLCB0qySdsoPiZP3iQE3rky0mBUtMZ23yDJ9SJdg6dXTSDnulOVqiF3Hgr9nbXvXTQZYA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.12.13"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-class-static-block": {[m
[31m-      "version": "7.14.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-class-static-block/-/plugin-syntax-class-static-block-7.14.5.tgz",[m
[31m-      "integrity": "sha512-b+YyPmr6ldyNnM6sqYeMWE+bgJcJpO6yS4QD7ymxgH34GBPNDM/THBh8iunyvKIZztiwLH4CJZ0RxTk9emgpjw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.14.5"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-dynamic-import": {[m
[31m-      "version": "7.8.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-dynamic-import/-/plugin-syntax-dynamic-import-7.8.3.tgz",[m
[31m-      "integrity": "sha512-5gdGbFon+PszYzqs83S3E5mpi7/y/8M9eC90MRTZfduQOYW76ig6SOSPNe41IG5LoP3FGBn2N0RjVDSQiS94kQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-export-namespace-from": {[m
[31m-      "version": "7.8.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-export-namespace-from/-/plugin-syntax-export-namespace-from-7.8.3.tgz",[m
[31m-      "integrity": "sha512-MXf5laXo6c1IbEbegDmzGPwGNTsHZmEy6QGznu5Sh2UCWvueywb2ee+CCE4zQiZstxU9BMoQO9i6zUFSY0Kj0Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.3"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-flow": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-flow/-/plugin-syntax-flow-7.18.6.tgz",[m
[31m-      "integrity": "sha512-LUbR+KNTBWCUAqRG9ex5Gnzu2IOkt8jRJbHHXFT9q+L9zm7M/QQbEqXyw1n1pohYvOyWC8CjeyjrSaIwiYjK7A==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-import-assertions": {[m
[31m-      "version": "7.20.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-import-assertions/-/plugin-syntax-import-assertions-7.20.0.tgz",[m
[31m-      "integrity": "sha512-IUh1vakzNoWalR8ch/areW7qFopR2AEw03JlG7BbrDqmQ4X3q9uuipQwSGrUn7oGiemKjtSLDhNtQHzMHr1JdQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.19.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-json-strings": {[m
[31m-      "version": "7.8.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-json-strings/-/plugin-syntax-json-strings-7.8.3.tgz",[m
[31m-      "integrity": "sha512-lY6kdGpWHvjoe2vk4WrAapEuBR69EMxZl+RoGRhrFGNYVK8mOPAW8VfbT/ZgrFbXlDNiiaxQnAtgVCZ6jv30EA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-jsx": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-jsx/-/plugin-syntax-jsx-7.18.6.tgz",[m
[31m-      "integrity": "sha512-6mmljtAedFGTWu2p/8WIORGwy+61PLgOMPOdazc7YoJ9ZCWUyFy3A6CpPkRKLKD1ToAesxX8KGEViAiLo9N+7Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-logical-assignment-operators": {[m
[31m-      "version": "7.10.4",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-logical-assignment-operators/-/plugin-syntax-logical-assignment-operators-7.10.4.tgz",[m
[31m-      "integrity": "sha512-d8waShlpFDinQ5MtvGU9xDAOzKH47+FFoney2baFIoMr952hKOLp1HR7VszoZvOsV/4+RRszNY7D17ba0te0ig==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.10.4"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-nullish-coalescing-operator": {[m
[31m-      "version": "7.8.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-nullish-coalescing-operator/-/plugin-syntax-nullish-coalescing-operator-7.8.3.tgz",[m
[31m-      "integrity": "sha512-aSff4zPII1u2QD7y+F8oDsz19ew4IGEJg9SVW+bqwpwtfFleiQDMdzA/R+UlWDzfnHFCxxleFT0PMIrR36XLNQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-numeric-separator": {[m
[31m-      "version": "7.10.4",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-numeric-separator/-/plugin-syntax-numeric-separator-7.10.4.tgz",[m
[31m-      "integrity": "sha512-9H6YdfkcK/uOnY/K7/aA2xpzaAgkQn37yzWUMRK7OaPOqOpGS1+n0H5hxT9AUw9EsSjPW8SVyMJwYRtWs3X3ug==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.10.4"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-object-rest-spread": {[m
[31m-      "version": "7.8.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-object-rest-spread/-/plugin-syntax-object-rest-spread-7.8.3.tgz",[m
[31m-      "integrity": "sha512-XoqMijGZb9y3y2XskN+P1wUGiVwWZ5JmoDRwx5+3GmEplNyVM2s2Dg8ILFQm8rWM48orGy5YpI5Bl8U1y7ydlA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-optional-catch-binding": {[m
[31m-      "version": "7.8.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-optional-catch-binding/-/plugin-syntax-optional-catch-binding-7.8.3.tgz",[m
[31m-      "integrity": "sha512-6VPD0Pc1lpTqw0aKoeRTMiB+kWhAoT24PA+ksWSBrFtl5SIRVpZlwN3NNPQjehA2E/91FV3RjLWoVTglWcSV3Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-optional-chaining": {[m
[31m-      "version": "7.8.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-optional-chaining/-/plugin-syntax-optional-chaining-7.8.3.tgz",[m
[31m-      "integrity": "sha512-KoK9ErH1MBlCPxV0VANkXW2/dw4vlbGDrFgz8bmUsBGYkFRcbRwMh6cIJubdPrkxRwuGdtCk0v/wPTKbQgBjkg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.8.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-private-property-in-object": {[m
[31m-      "version": "7.14.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-private-property-in-object/-/plugin-syntax-private-property-in-object-7.14.5.tgz",[m
[31m-      "integrity": "sha512-0wVnp9dxJ72ZUJDV27ZfbSj6iHLoytYZmh3rFcxNnvsJF3ktkzLDZPy/mA17HGsaQT3/DQsWYX1f1QGWkCoVUg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.14.5"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-top-level-await": {[m
[31m-      "version": "7.14.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-top-level-await/-/plugin-syntax-top-level-await-7.14.5.tgz",[m
[31m-      "integrity": "sha512-hx++upLv5U1rgYfwe1xBQUhRmU41NEvpUvrp8jkrSCdvGSnM5/qdRMtylJ6PG5OFkBaHkbTAKTnd3/YyESRHFw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.14.5"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-syntax-typescript": {[m
[31m-      "version": "7.20.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-syntax-typescript/-/plugin-syntax-typescript-7.20.0.tgz",[m
[31m-      "integrity": "sha512-rd9TkG+u1CExzS4SM1BlMEhMXwFLKVjOAFFCDx9PbX5ycJWDoWMcwdJH9RhkPu1dOgn5TrxLot/Gx6lWFuAUNQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.19.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-arrow-functions": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-arrow-functions/-/plugin-transform-arrow-functions-7.20.7.tgz",[m
[31m-      "integrity": "sha512-3poA5E7dzDomxj9WXWwuD6A5F3kc7VXwIJO+E+J8qtDtS+pXPAhrgEyh+9GBwBgPq1Z+bB+/JD60lp5jsN7JPQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-async-to-generator": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-async-to-generator/-/plugin-transform-async-to-generator-7.20.7.tgz",[m
[31m-      "integrity": "sha512-Uo5gwHPT9vgnSXQxqGtpdufUiWp96gk7yiP4Mp5bm1QMkEmLXBO7PAGYbKoJ6DhAwiNkcHFBol/x5zZZkL/t0Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-module-imports": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-remap-async-to-generator": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-block-scoped-functions": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-block-scoped-functions/-/plugin-transform-block-scoped-functions-7.18.6.tgz",[m
[31m-      "integrity": "sha512-ExUcOqpPWnliRcPqves5HJcJOvHvIIWfuS4sroBUenPuMdmW+SMHDakmtS7qOo13sVppmUijqeTv7qqGsvURpQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-block-scoping": {[m
[31m-      "version": "7.20.15",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-block-scoping/-/plugin-transform-block-scoping-7.20.15.tgz",[m
[31m-      "integrity": "sha512-Vv4DMZ6MiNOhu/LdaZsT/bsLRxgL94d269Mv4R/9sp6+Mp++X/JqypZYypJXLlM4mlL352/Egzbzr98iABH1CA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-classes": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-classes/-/plugin-transform-classes-7.20.7.tgz",[m
[31m-      "integrity": "sha512-LWYbsiXTPKl+oBlXUGlwNlJZetXD5Am+CyBdqhPsDVjM9Jc8jwBJFrKhHf900Kfk2eZG1y9MAG3UNajol7A4VQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-annotate-as-pure": "^7.18.6",[m
[31m-        "@babel/helper-compilation-targets": "^7.20.7",[m
[31m-        "@babel/helper-environment-visitor": "^7.18.9",[m
[31m-        "@babel/helper-function-name": "^7.19.0",[m
[31m-        "@babel/helper-optimise-call-expression": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-replace-supers": "^7.20.7",[m
[31m-        "@babel/helper-split-export-declaration": "^7.18.6",[m
[31m-        "globals": "^11.1.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-computed-properties": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-computed-properties/-/plugin-transform-computed-properties-7.20.7.tgz",[m
[31m-      "integrity": "sha512-Lz7MvBK6DTjElHAmfu6bfANzKcxpyNPeYBGEafyA6E5HtRpjpZwU+u7Qrgz/2OR0z+5TvKYbPdphfSaAcZBrYQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/template": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-destructuring": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-destructuring/-/plugin-transform-destructuring-7.20.7.tgz",[m
[31m-      "integrity": "sha512-Xwg403sRrZb81IVB79ZPqNQME23yhugYVqgTxAhT99h485F4f+GMELFhhOsscDUB7HCswepKeCKLn/GZvUKoBA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-dotall-regex": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-dotall-regex/-/plugin-transform-dotall-regex-7.18.6.tgz",[m
[31m-      "integrity": "sha512-6S3jpun1eEbAxq7TdjLotAsl4WpQI9DxfkycRcKrjhQYzU87qpXdknpBg/e+TdcMehqGnLFi7tnFUBR02Vq6wg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-regexp-features-plugin": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-duplicate-keys": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-duplicate-keys/-/plugin-transform-duplicate-keys-7.18.9.tgz",[m
[31m-      "integrity": "sha512-d2bmXCtZXYc59/0SanQKbiWINadaJXqtvIQIzd4+hNwkWBgyCd5F/2t1kXoUdvPMrxzPvhK6EMQRROxsue+mfw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-exponentiation-operator": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-exponentiation-operator/-/plugin-transform-exponentiation-operator-7.18.6.tgz",[m
[31m-      "integrity": "sha512-wzEtc0+2c88FVR34aQmiz56dxEkxr2g8DQb/KfaFa1JYXOFVsbhvAonFN6PwVWj++fKmku8NP80plJ5Et4wqHw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-builder-binary-assignment-operator-visitor": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-flow-strip-types": {[m
[31m-      "version": "7.19.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-flow-strip-types/-/plugin-transform-flow-strip-types-7.19.0.tgz",[m
[31m-      "integrity": "sha512-sgeMlNaQVbCSpgLSKP4ZZKfsJVnFnNQlUSk6gPYzR/q7tzCgQF2t8RBKAP6cKJeZdveei7Q7Jm527xepI8lNLg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.19.0",[m
[31m-        "@babel/plugin-syntax-flow": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-for-of": {[m
[31m-      "version": "7.18.8",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-for-of/-/plugin-transform-for-of-7.18.8.tgz",[m
[31m-      "integrity": "sha512-yEfTRnjuskWYo0k1mHUqrVWaZwrdq8AYbfrpqULOJOaucGSp4mNMVps+YtA8byoevxS/urwU75vyhQIxcCgiBQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-function-name": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-function-name/-/plugin-transform-function-name-7.18.9.tgz",[m
[31m-      "integrity": "sha512-WvIBoRPaJQ5yVHzcnJFor7oS5Ls0PYixlTYE63lCj2RtdQEl15M68FXQlxnG6wdraJIXRdR7KI+hQ7q/9QjrCQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-compilation-targets": "^7.18.9",[m
[31m-        "@babel/helper-function-name": "^7.18.9",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-literals": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-literals/-/plugin-transform-literals-7.18.9.tgz",[m
[31m-      "integrity": "sha512-IFQDSRoTPnrAIrI5zoZv73IFeZu2dhu6irxQjY9rNjTT53VmKg9fenjvoiOWOkJ6mm4jKVPtdMzBY98Fp4Z4cg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-member-expression-literals": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-member-expression-literals/-/plugin-transform-member-expression-literals-7.18.6.tgz",[m
[31m-      "integrity": "sha512-qSF1ihLGO3q+/g48k85tUjD033C29TNTVB2paCwZPVmOsjn9pClvYYrM2VeJpBY2bcNkuny0YUyTNRyRxJ54KA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-modules-amd": {[m
[31m-      "version": "7.20.11",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-modules-amd/-/plugin-transform-modules-amd-7.20.11.tgz",[m
[31m-      "integrity": "sha512-NuzCt5IIYOW0O30UvqktzHYR2ud5bOWbY0yaxWZ6G+aFzOMJvrs5YHNikrbdaT15+KNO31nPOy5Fim3ku6Zb5g==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-module-transforms": "^7.20.11",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-modules-commonjs": {[m
[31m-      "version": "7.20.11",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-modules-commonjs/-/plugin-transform-modules-commonjs-7.20.11.tgz",[m
[31m-      "integrity": "sha512-S8e1f7WQ7cimJQ51JkAaDrEtohVEitXjgCGAS2N8S31Y42E+kWwfSz83LYz57QdBm7q9diARVqanIaH2oVgQnw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-module-transforms": "^7.20.11",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-simple-access": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-modules-systemjs": {[m
[31m-      "version": "7.20.11",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-modules-systemjs/-/plugin-transform-modules-systemjs-7.20.11.tgz",[m
[31m-      "integrity": "sha512-vVu5g9BPQKSFEmvt2TA4Da5N+QVS66EX21d8uoOihC+OCpUoGvzVsXeqFdtAEfVa5BILAeFt+U7yVmLbQnAJmw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-hoist-variables": "^7.18.6",[m
[31m-        "@babel/helper-module-transforms": "^7.20.11",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-validator-identifier": "^7.19.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-modules-umd": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-modules-umd/-/plugin-transform-modules-umd-7.18.6.tgz",[m
[31m-      "integrity": "sha512-dcegErExVeXcRqNtkRU/z8WlBLnvD4MRnHgNs3MytRO1Mn1sHRyhbcpYbVMGclAqOjdW+9cfkdZno9dFdfKLfQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-module-transforms": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-named-capturing-groups-regex": {[m
[31m-      "version": "7.20.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-named-capturing-groups-regex/-/plugin-transform-named-capturing-groups-regex-7.20.5.tgz",[m
[31m-      "integrity": "sha512-mOW4tTzi5iTLnw+78iEq3gr8Aoq4WNRGpmSlrogqaiCBoR1HFhpU4JkpQFOHfeYx3ReVIFWOQJS4aZBRvuZ6mA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-regexp-features-plugin": "^7.20.5",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-new-target": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-new-target/-/plugin-transform-new-target-7.18.6.tgz",[m
[31m-      "integrity": "sha512-DjwFA/9Iu3Z+vrAn+8pBUGcjhxKguSMlsFqeCKbhb9BAV756v0krzVK04CRDi/4aqmk8BsHb4a/gFcaA5joXRw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-object-super": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-object-super/-/plugin-transform-object-super-7.18.6.tgz",[m
[31m-      "integrity": "sha512-uvGz6zk+pZoS1aTZrOvrbj6Pp/kK2mp45t2B+bTDre2UgsZZ8EZLSJtUg7m/no0zOJUWgFONpB7Zv9W2tSaFlA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/helper-replace-supers": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-parameters": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-parameters/-/plugin-transform-parameters-7.20.7.tgz",[m
[31m-      "integrity": "sha512-WiWBIkeHKVOSYPO0pWkxGPfKeWrCJyD3NJ53+Lrp/QMSZbsVPovrVl2aWZ19D/LTVnaDv5Ap7GJ/B2CTOZdrfA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-property-literals": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-property-literals/-/plugin-transform-property-literals-7.18.6.tgz",[m
[31m-      "integrity": "sha512-cYcs6qlgafTud3PAzrrRNbQtfpQ8+y/+M5tKmksS9+M1ckbH6kzY8MrexEM9mcA6JDsukE19iIRvAyYl463sMg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-react-display-name": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-react-display-name/-/plugin-transform-react-display-name-7.18.6.tgz",[m
[31m-      "integrity": "sha512-TV4sQ+T013n61uMoygyMRm+xf04Bd5oqFpv2jAEQwSZ8NwQA7zeRPg1LMVg2PWi3zWBz+CLKD+v5bcpZ/BS0aA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-react-jsx": {[m
[31m-      "version": "7.20.13",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-react-jsx/-/plugin-transform-react-jsx-7.20.13.tgz",[m
[31m-      "integrity": "sha512-MmTZx/bkUrfJhhYAYt3Urjm+h8DQGrPrnKQ94jLo7NLuOU+T89a7IByhKmrb8SKhrIYIQ0FN0CHMbnFRen4qNw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-annotate-as-pure": "^7.18.6",[m
[31m-        "@babel/helper-module-imports": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/plugin-syntax-jsx": "^7.18.6",[m
[31m-        "@babel/types": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-react-jsx-development": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-react-jsx-development/-/plugin-transform-react-jsx-development-7.18.6.tgz",[m
[31m-      "integrity": "sha512-SA6HEjwYFKF7WDjWcMcMGUimmw/nhNRDWxr+KaLSCrkD/LMDBvWRmHAYgE1HDeF8KUuI8OAu+RT6EOtKxSW2qA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/plugin-transform-react-jsx": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-react-pure-annotations": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-react-pure-annotations/-/plugin-transform-react-pure-annotations-7.18.6.tgz",[m
[31m-      "integrity": "sha512-I8VfEPg9r2TRDdvnHgPepTKvuRomzA8+u+nhY7qSI1fR2hRNebasZEETLyM5mAUr0Ku56OkXJ0I7NHJnO6cJiQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-annotate-as-pure": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-regenerator": {[m
[31m-      "version": "7.20.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-regenerator/-/plugin-transform-regenerator-7.20.5.tgz",[m
[31m-      "integrity": "sha512-kW/oO7HPBtntbsahzQ0qSE3tFvkFwnbozz3NWFhLGqH75vLEg+sCGngLlhVkePlCs3Jv0dBBHDzCHxNiFAQKCQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "regenerator-transform": "^0.15.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-reserved-words": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-reserved-words/-/plugin-transform-reserved-words-7.18.6.tgz",[m
[31m-      "integrity": "sha512-oX/4MyMoypzHjFrT1CdivfKZ+XvIPMFXwwxHp/r0Ddy2Vuomt4HDFGmft1TAY2yiTKiNSsh3kjBAzcM8kSdsjA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-runtime": {[m
[31m-      "version": "7.19.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-runtime/-/plugin-transform-runtime-7.19.6.tgz",[m
[31m-      "integrity": "sha512-PRH37lz4JU156lYFW1p8OxE5i7d6Sl/zV58ooyr+q1J1lnQPyg5tIiXlIwNVhJaY4W3TmOtdc8jqdXQcB1v5Yw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-module-imports": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.19.0",[m
[31m-        "babel-plugin-polyfill-corejs2": "^0.3.3",[m
[31m-        "babel-plugin-polyfill-corejs3": "^0.6.0",[m
[31m-        "babel-plugin-polyfill-regenerator": "^0.4.1",[m
[31m-        "semver": "^6.3.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-shorthand-properties": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-shorthand-properties/-/plugin-transform-shorthand-properties-7.18.6.tgz",[m
[31m-      "integrity": "sha512-eCLXXJqv8okzg86ywZJbRn19YJHU4XUa55oz2wbHhaQVn/MM+XhukiT7SYqp/7o00dg52Rj51Ny+Ecw4oyoygw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-spread": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-spread/-/plugin-transform-spread-7.20.7.tgz",[m
[31m-      "integrity": "sha512-ewBbHQ+1U/VnH1fxltbJqDeWBU1oNLG8Dj11uIv3xVf7nrQu0bPGe5Rf716r7K5Qz+SqtAOVswoVunoiBtGhxw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-skip-transparent-expression-wrappers": "^7.20.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-sticky-regex": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-sticky-regex/-/plugin-transform-sticky-regex-7.18.6.tgz",[m
[31m-      "integrity": "sha512-kfiDrDQ+PBsQDO85yj1icueWMfGfJFKN1KCkndygtu/C9+XUfydLC8Iv5UYJqRwy4zk8EcplRxEOeLyjq1gm6Q==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-template-literals": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-template-literals/-/plugin-transform-template-literals-7.18.9.tgz",[m
[31m-      "integrity": "sha512-S8cOWfT82gTezpYOiVaGHrCbhlHgKhQt8XH5ES46P2XWmX92yisoZywf5km75wv5sYcXDUCLMmMxOLCtthDgMA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-typeof-symbol": {[m
[31m-      "version": "7.18.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-typeof-symbol/-/plugin-transform-typeof-symbol-7.18.9.tgz",[m
[31m-      "integrity": "sha512-SRfwTtF11G2aemAZWivL7PD+C9z52v9EvMqH9BuYbabyPuKUvSWks3oCg6041pT925L4zVFqaVBeECwsmlguEw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-typescript": {[m
[31m-      "version": "7.20.13",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-typescript/-/plugin-transform-typescript-7.20.13.tgz",[m
[31m-      "integrity": "sha512-O7I/THxarGcDZxkgWKMUrk7NK1/WbHAg3Xx86gqS6x9MTrNL6AwIluuZ96ms4xeDe6AVx6rjHbWHP7x26EPQBA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-class-features-plugin": "^7.20.12",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/plugin-syntax-typescript": "^7.20.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-unicode-escapes": {[m
[31m-      "version": "7.18.10",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-unicode-escapes/-/plugin-transform-unicode-escapes-7.18.10.tgz",[m
[31m-      "integrity": "sha512-kKAdAI+YzPgGY/ftStBFXTI1LZFju38rYThnfMykS+IXy8BVx+res7s2fxf1l8I35DV2T97ezo6+SGrXz6B3iQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.9"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/plugin-transform-unicode-regex": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/plugin-transform-unicode-regex/-/plugin-transform-unicode-regex-7.18.6.tgz",[m
[31m-      "integrity": "sha512-gE7A6Lt7YLnNOL3Pb9BNeZvi+d8l7tcRrG4+pwJjK9hD2xX4mEvjlQW60G9EEmfXVYRPv9VRQcyegIVHCql/AA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-create-regexp-features-plugin": "^7.18.6",[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/preset-env": {[m
[31m-      "version": "7.20.2",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/preset-env/-/preset-env-7.20.2.tgz",[m
[31m-      "integrity": "sha512-1G0efQEWR1EHkKvKHqbG+IN/QdgwfByUpM5V5QroDzGV2t3S/WXNQd693cHiHTlCFMpr9B6FkPFXDA2lQcKoDg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/compat-data": "^7.20.1",[m
[31m-        "@babel/helper-compilation-targets": "^7.20.0",[m
[31m-        "@babel/helper-plugin-utils": "^7.20.2",[m
[31m-        "@babel/helper-validator-option": "^7.18.6",[m
[31m-        "@babel/plugin-bugfix-safari-id-destructuring-collision-in-function-expression": "^7.18.6",[m
[31m-        "@babel/plugin-bugfix-v8-spread-parameters-in-optional-chaining": "^7.18.9",[m
[31m-        "@babel/plugin-proposal-async-generator-functions": "^7.20.1",[m
[31m-        "@babel/plugin-proposal-class-properties": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-class-static-block": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-dynamic-import": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-export-namespace-from": "^7.18.9",[m
[31m-        "@babel/plugin-proposal-json-strings": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-logical-assignment-operators": "^7.18.9",[m
[31m-        "@babel/plugin-proposal-nullish-coalescing-operator": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-numeric-separator": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-object-rest-spread": "^7.20.2",[m
[31m-        "@babel/plugin-proposal-optional-catch-binding": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-optional-chaining": "^7.18.9",[m
[31m-        "@babel/plugin-proposal-private-methods": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-private-property-in-object": "^7.18.6",[m
[31m-        "@babel/plugin-proposal-unicode-property-regex": "^7.18.6",[m
[31m-        "@babel/plugin-syntax-async-generators": "^7.8.4",[m
[31m-        "@babel/plugin-syntax-class-properties": "^7.12.13",[m
[31m-        "@babel/plugin-syntax-class-static-block": "^7.14.5",[m
[31m-        "@babel/plugin-syntax-dynamic-import": "^7.8.3",[m
[31m-        "@babel/plugin-syntax-export-namespace-from": "^7.8.3",[m
[31m-        "@babel/plugin-syntax-import-assertions": "^7.20.0",[m
[31m-        "@babel/plugin-syntax-json-strings": "^7.8.3",[m
[31m-        "@babel/plugin-syntax-logical-assignment-operators": "^7.10.4",[m
[31m-        "@babel/plugin-syntax-nullish-coalescing-operator": "^7.8.3",[m
[31m-        "@babel/plugin-syntax-numeric-separator": "^7.10.4",[m
[31m-        "@babel/plugin-syntax-object-rest-spread": "^7.8.3",[m
[31m-        "@babel/plugin-syntax-optional-catch-binding": "^7.8.3",[m
[31m-        "@babel/plugin-syntax-optional-chaining": "^7.8.3",[m
[31m-        "@babel/plugin-syntax-private-property-in-object": "^7.14.5",[m
[31m-        "@babel/plugin-syntax-top-level-await": "^7.14.5",[m
[31m-        "@babel/plugin-transform-arrow-functions": "^7.18.6",[m
[31m-        "@babel/plugin-transform-async-to-generator": "^7.18.6",[m
[31m-        "@babel/plugin-transform-block-scoped-functions": "^7.18.6",[m
[31m-        "@babel/plugin-transform-block-scoping": "^7.20.2",[m
[31m-        "@babel/plugin-transform-classes": "^7.20.2",[m
[31m-        "@babel/plugin-transform-computed-properties": "^7.18.9",[m
[31m-        "@babel/plugin-transform-destructuring": "^7.20.2",[m
[31m-        "@babel/plugin-transform-dotall-regex": "^7.18.6",[m
[31m-        "@babel/plugin-transform-duplicate-keys": "^7.18.9",[m
[31m-        "@babel/plugin-transform-exponentiation-operator": "^7.18.6",[m
[31m-        "@babel/plugin-transform-for-of": "^7.18.8",[m
[31m-        "@babel/plugin-transform-function-name": "^7.18.9",[m
[31m-        "@babel/plugin-transform-literals": "^7.18.9",[m
[31m-        "@babel/plugin-transform-member-expression-literals": "^7.18.6",[m
[31m-        "@babel/plugin-transform-modules-amd": "^7.19.6",[m
[31m-        "@babel/plugin-transform-modules-commonjs": "^7.19.6",[m
[31m-        "@babel/plugin-transform-modules-systemjs": "^7.19.6",[m
[31m-        "@babel/plugin-transform-modules-umd": "^7.18.6",[m
[31m-        "@babel/plugin-transform-named-capturing-groups-regex": "^7.19.1",[m
[31m-        "@babel/plugin-transform-new-target": "^7.18.6",[m
[31m-        "@babel/plugin-transform-object-super": "^7.18.6",[m
[31m-        "@babel/plugin-transform-parameters": "^7.20.1",[m
[31m-        "@babel/plugin-transform-property-literals": "^7.18.6",[m
[31m-        "@babel/plugin-transform-regenerator": "^7.18.6",[m
[31m-        "@babel/plugin-transform-reserved-words": "^7.18.6",[m
[31m-        "@babel/plugin-transform-shorthand-properties": "^7.18.6",[m
[31m-        "@babel/plugin-transform-spread": "^7.19.0",[m
[31m-        "@babel/plugin-transform-sticky-regex": "^7.18.6",[m
[31m-        "@babel/plugin-transform-template-literals": "^7.18.9",[m
[31m-        "@babel/plugin-transform-typeof-symbol": "^7.18.9",[m
[31m-        "@babel/plugin-transform-unicode-escapes": "^7.18.10",[m
[31m-        "@babel/plugin-transform-unicode-regex": "^7.18.6",[m
[31m-        "@babel/preset-modules": "^0.1.5",[m
[31m-        "@babel/types": "^7.20.2",[m
[31m-        "babel-plugin-polyfill-corejs2": "^0.3.3",[m
[31m-        "babel-plugin-polyfill-corejs3": "^0.6.0",[m
[31m-        "babel-plugin-polyfill-regenerator": "^0.4.1",[m
[31m-        "core-js-compat": "^3.25.1",[m
[31m-        "semver": "^6.3.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/preset-modules": {[m
[31m-      "version": "0.1.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/preset-modules/-/preset-modules-0.1.5.tgz",[m
[31m-      "integrity": "sha512-A57th6YRG7oR3cq/yt/Y84MvGgE0eJG2F1JLhKuyG+jFxEgrd/HAMJatiFtmOiZurz+0DkrvbheCLaV5f2JfjA==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.0.0",[m
[31m-        "@babel/plugin-proposal-unicode-property-regex": "^7.4.4",[m
[31m-        "@babel/plugin-transform-dotall-regex": "^7.4.4",[m
[31m-        "@babel/types": "^7.4.4",[m
[31m-        "esutils": "^2.0.2"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/preset-react": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/preset-react/-/preset-react-7.18.6.tgz",[m
[31m-      "integrity": "sha512-zXr6atUmyYdiWRVLOZahakYmOBHtWc2WGCkP8PYTgZi0iJXDY2CN180TdrIW4OGOAdLc7TifzDIvtx6izaRIzg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/helper-validator-option": "^7.18.6",[m
[31m-        "@babel/plugin-transform-react-display-name": "^7.18.6",[m
[31m-        "@babel/plugin-transform-react-jsx": "^7.18.6",[m
[31m-        "@babel/plugin-transform-react-jsx-development": "^7.18.6",[m
[31m-        "@babel/plugin-transform-react-pure-annotations": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/preset-typescript": {[m
[31m-      "version": "7.18.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/preset-typescript/-/preset-typescript-7.18.6.tgz",[m
[31m-      "integrity": "sha512-s9ik86kXBAnD760aybBucdpnLsAt0jK1xqJn2juOn9lkOvSHV60os5hxoVJsPzMQxvnUJFAlkont2DvvaYEBtQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-plugin-utils": "^7.18.6",[m
[31m-        "@babel/helper-validator-option": "^7.18.6",[m
[31m-        "@babel/plugin-transform-typescript": "^7.18.6"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@babel/core": "^7.0.0-0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/runtime": {[m
[31m-      "version": "7.20.13",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/runtime/-/runtime-7.20.13.tgz",[m
[31m-      "integrity": "sha512-gt3PKXs0DBoL9xCvOIIZ2NEqAGZqHjAnmVbfQtB620V0uReIQutpel14KcneZuer7UioY8ALKZ7iocavvzTNFA==",[m
[31m-      "dependencies": {[m
[31m-        "regenerator-runtime": "^0.13.11"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/template": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/template/-/template-7.20.7.tgz",[m
[31m-      "integrity": "sha512-8SegXApWe6VoNw0r9JHpSteLKTpTiLZ4rMlGIm9JQ18KiCtyQiAMEazujAHrUS5flrcqYZa75ukev3P6QmUwUw==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/code-frame": "^7.18.6",[m
[31m-        "@babel/parser": "^7.20.7",[m
[31m-        "@babel/types": "^7.20.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/traverse": {[m
[31m-      "version": "7.20.13",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/traverse/-/traverse-7.20.13.tgz",[m
[31m-      "integrity": "sha512-kMJXfF0T6DIS9E8cgdLCSAL+cuCK+YEZHWiLK0SXpTo8YRj5lpJu3CDNKiIBCne4m9hhTIqUg6SYTAI39tAiVQ==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/code-frame": "^7.18.6",[m
[31m-        "@babel/generator": "^7.20.7",[m
[31m-        "@babel/helper-environment-visitor": "^7.18.9",[m
[31m-        "@babel/helper-function-name": "^7.19.0",[m
[31m-        "@babel/helper-hoist-variables": "^7.18.6",[m
[31m-        "@babel/helper-split-export-declaration": "^7.18.6",[m
[31m-        "@babel/parser": "^7.20.13",[m
[31m-        "@babel/types": "^7.20.7",[m
[31m-        "debug": "^4.1.0",[m
[31m-        "globals": "^11.1.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@babel/types": {[m
[31m-      "version": "7.20.7",[m
[31m-      "resolved": "https://registry.npmjs.org/@babel/types/-/types-7.20.7.tgz",[m
[31m-      "integrity": "sha512-69OnhBxSSgK0OzTJai4kyPDiKTIe3j+ctaHdIGVbRahTLAT7L3R9oeXHC2aVSuGYt3cVnoAMDmOCgJ2yaiLMvg==",[m
[31m-      "dependencies": {[m
[31m-        "@babel/helper-string-parser": "^7.