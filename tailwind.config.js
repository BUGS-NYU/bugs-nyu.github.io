/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ['./src/pages/**/*.{js,jsx,ts,tsx}', './src/components/**/*.{js,jsx,ts,tsx}'],
  darkMode: 'class',
  theme: {
    extend: {
      transitionProperty: {
        height: 'height',
      },
      height: {
        "30rem": "30rem"
      }
    },
  },
  plugins: [],
};
