/*! For license information please see component---src-pages-projects-tsx-36611c48fff0d8bfc854.js.LICENSE.txt */
(self.webpackChunkbugs_nyu_github_io=self.webpackChunkbugs_nyu_github_io||[]).push([[317],{4184:function(e,t){var r;!function(){"use strict";var n={}.hasOwnProperty;function a(){for(var e=[],t=0;t<arguments.length;t++){var r=arguments[t];if(r){var o=typeof r;if("string"===o||"number"===o)e.push(r);else if(Array.isArray(r)){if(r.length){var l=a.apply(null,r);l&&e.push(l)}}else if("object"===o){if(r.toString!==Object.prototype.toString&&!r.toString.toString().includes("[native code]")){e.push(r.toString());continue}for(var s in r)n.call(r,s)&&r[s]&&e.push(s)}}}return e.join(" ")}e.exports?(a.default=a,e.exports=a):void 0===(r=function(){return a}.apply(t,[]))||(e.exports=r)}()},5815:function(e,t,r){"use strict";var n=r(4184),a=r.n(n),o=r(7294);const l={base:"",disabled:"opacity-50 cursor-not-allowed",size:{small:"px-2 py-1 text-sm",normal:"px-4 py-2",large:"px-8 py-3 text-lg"},radius:{small:"rounded-sm",normal:"rounded",large:"rounded-lg"},variant:{default:"bg-white dark:bg-neutral-900 dark:border-gray-300 border-gray-300 border hover:bg-gray-100 text-black dark:text-white",primary:"bg-neutral-900 dark:bg-neutral-800 hover:bg-neutral-800 dark:hover:bg-neutral-600 text-white",secondary:"bg-violet-800 hover:bg-violet-600 text-white"}},s=o.forwardRef(((e,t)=>{let{children:r,type:n,className:s,variant:i="default",size:c="normal",radius:u="normal",disabled:m,...d}=e;return o.createElement("button",Object.assign({ref:t,disabled:m,type:n,className:a()(l.base,l.size[c],l.radius[u],l.variant[i],m&&l.disabled,s)},d),r)}));s.displayName="Button",t.Z=s},4223:function(e,t,r){"use strict";var n=r(4184),a=r.n(n),o=r(7294);const l={base:"group bg-white border-gray-300 border dark:bg-neutral-900 dark:border-neutral-700 hover:bg-gray-200 dark:hover:bg-neutral-800 transition-colors",size:{small:"p-4 text-sm",normal:"p-8",large:"p-16 text-lg"},radius:{small:"rounded-sm",normal:"rounded-lg",large:"rounded-2xl"},shadow:{none:"",normal:"drop-shadow-[0_8px_16px_rgba(151,151,151,0.25)]"}};function s(e){let{children:t,size:r="normal",radius:n="normal",shadow:s="none",link:i}=e;const c=a()(l.base,l.size[r],l.radius[n],l.shadow[s]);return void 0===i?o.createElement("div",{className:c},t):o.createElement("a",{href:i,target:"_blank",rel:"noreferrer",className:c},t)}s.displayName="Card",t.Z=s},4255:function(e,t,r){"use strict";r.d(t,{Z:function(){return z}});var n=r(7294),a=r(1883),o=r(1292),l=function(){return l=Object.assign||function(e){for(var t,r=1,n=arguments.length;r<n;r++)for(var a in t=arguments[r])Object.prototype.hasOwnProperty.call(t,a)&&(e[a]=t[a]);return e},l.apply(this,arguments)};var s=n.forwardRef((function(e,t){var r=n.useContext(o.s),a=l(l({},r),e);return n.createElement("svg",l({width:"1.5em",height:"1.5em",strokeWidth:1.5,viewBox:"0 0 24 24",fill:"none",xmlns:"http://www.w3.org/2000/svg",color:"currentColor",ref:t},a),n.createElement("path",{d:"M6.758 17.243L12.001 12m5.243-5.243L12 12m0 0L6.758 6.757M12.001 12l5.243 5.243",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}))})),i=function(){return i=Object.assign||function(e){for(var t,r=1,n=arguments.length;r<n;r++)for(var a in t=arguments[r])Object.prototype.hasOwnProperty.call(t,a)&&(e[a]=t[a]);return e},i.apply(this,arguments)};var c=n.forwardRef((function(e,t){var r=n.useContext(o.s),a=i(i({},r),e);return n.createElement("svg",i({width:"1.5em",height:"1.5em",strokeWidth:1.5,viewBox:"0 0 24 24",fill:"none",xmlns:"http://www.w3.org/2000/svg",color:"currentColor",ref:t},a),n.createElement("path",{d:"M3 5h18M3 12h18M3 19h18",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}))})),u=r(5815);const m="bugsThemeStorageKey";function d(){return"undefined"==typeof window}function h(){var e;return d()?"dark":null!==(e=localStorage.getItem(m))&&void 0!==e?e:window.matchMedia&&window.matchMedia("(prefers-color-scheme: dark)").matches?"dark":"light"}function f(e){d()||localStorage.setItem(m,e)}const p=(0,n.createContext)({currentTheme:"light",toggleCurrentTheme:()=>f("dark")});function g(){return(0,n.useContext)(p)}function v(e){let{children:t}=e;const{0:r,1:a}=(0,n.useState)(h);return n.createElement(p.Provider,{value:{currentTheme:r,toggleCurrentTheme:()=>{a((e=>{const t="light"===e?"dark":"light";return f(t),t}))}}},t)}const b=[{to:"/about",value:"About us"},{to:"/projects",value:"Projects"},{to:"/events",value:"Events"},{to:"/alumni",value:"Alumni"}];function w(){const{currentTheme:e,toggleCurrentTheme:t}=g(),{0:r,1:o}=(0,n.useState)(!1);(0,n.useEffect)((()=>{const e=()=>o(!1);return window.addEventListener("resize",e),()=>{window.removeEventListener("resize",e)}}),[]);return n.createElement("header",null,n.createElement("nav",{className:"flex max-w-5xl mx-auto items-center justify-between flex-wrap p-8"},n.createElement("div",{className:"flex items-center flex-shrink-0"},n.createElement(a.Link,{to:"/",className:"text-xl font-bold dark:text-stone-100"},"BUGS")),n.createElement("div",{className:"block md:hidden"},n.createElement("button",{className:("light"===e?"text-black":"text-white")+" flex w-10 h-10 items-center justify-center",onClick:()=>o((e=>!e))},r?n.createElement(s,null):n.createElement(c,null))),n.createElement("div",{className:(r?"":"h-0")+" w-full block truncate flex-grow mt-2 transition-height duration-100 md:mt-0 md:flex md:items-center md:w-auto md:h-auto"},n.createElement("div",{className:"md:flex md:flex-row md:flex-grow md:space-x-12 md:justify-center"},b.map((e=>{let{to:t,value:r}=e;return n.createElement(a.Link,{key:r,to:t,className:"text-zinc-800 block mb-4 md:mb-0 md:inline-block dark:text-stone-100"},r)}))),n.createElement("div",{className:"flex flex-row gap-2"},n.createElement("a",{href:"https://discord.gg/75jgtXy7rz"},n.createElement(u.Z,{variant:"secondary",className:"px-6"},"Join")),n.createElement(u.Z,{variant:"primary",className:"pv-6",onClick:t},"light"===e?"☀️ ":"🌙")))))}w.displayName="NavBar";var x=w,k=r(762),y=function(){return y=Object.assign||function(e){for(var t,r=1,n=arguments.length;r<n;r++)for(var a in t=arguments[r])Object.prototype.hasOwnProperty.call(t,a)&&(e[a]=t[a]);return e},y.apply(this,arguments)};var E=n.forwardRef((function(e,t){var r=n.useContext(o.s),a=y(y({},r),e);return n.createElement("svg",y({width:"1.5em",height:"1.5em",viewBox:"0 0 24 24",strokeWidth:1.5,fill:"none",xmlns:"http://www.w3.org/2000/svg",color:"currentColor",ref:t},a),n.createElement("path",{d:"M5.5 16c5 2.5 8 2.5 13 0M15.5 17.5l1 2s4.171-1.328 5.5-3.5c0-1 .53-8.147-3-10.5-1.5-1-4-1.5-4-1.5l-1 2h-2",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}),n.createElement("path",{d:"M8.528 17.5l-1 2s-4.171-1.328-5.5-3.5c0-1-.53-8.147 3-10.5 1.5-1 4-1.5 4-1.5l1 2h2",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}),n.createElement("path",{d:"M8.5 14c-.828 0-1.5-.895-1.5-2s.672-2 1.5-2 1.5.895 1.5 2-.672 2-1.5 2zM15.5 14c-.828 0-1.5-.895-1.5-2s.672-2 1.5-2 1.5.895 1.5 2-.672 2-1.5 2z",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}))})),N=function(){return N=Object.assign||function(e){for(var t,r=1,n=arguments.length;r<n;r++)for(var a in t=arguments[r])Object.prototype.hasOwnProperty.call(t,a)&&(e[a]=t[a]);return e},N.apply(this,arguments)};var j=n.forwardRef((function(e,t){var r=n.useContext(o.s),a=N(N({},r),e);return n.createElement("svg",N({width:"1.5em",height:"1.5em",strokeWidth:1.5,viewBox:"0 0 24 24",fill:"none",xmlns:"http://www.w3.org/2000/svg",color:"currentColor",ref:t},a),n.createElement("path",{d:"M7 9l5 3.5L17 9",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}),n.createElement("path",{d:"M2 17V7a2 2 0 012-2h16a2 2 0 012 2v10a2 2 0 01-2 2H4a2 2 0 01-2-2z",stroke:"currentColor"}))})),C=function(){return C=Object.assign||function(e){for(var t,r=1,n=arguments.length;r<n;r++)for(var a in t=arguments[r])Object.prototype.hasOwnProperty.call(t,a)&&(e[a]=t[a]);return e},C.apply(this,arguments)};var U=n.forwardRef((function(e,t){var r=n.useContext(o.s),a=C(C({},r),e);return n.createElement("svg",C({width:"1.5em",height:"1.5em",strokeWidth:1.5,viewBox:"0 0 24 24",fill:"none",xmlns:"http://www.w3.org/2000/svg",color:"currentColor",ref:t},a),n.createElement("path",{d:"M12 16a4 4 0 100-8 4 4 0 000 8z",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}),n.createElement("path",{d:"M3 16V8a5 5 0 015-5h8a5 5 0 015 5v8a5 5 0 01-5 5H8a5 5 0 01-5-5z",stroke:"currentColor"}),n.createElement("path",{d:"M17.5 6.51l.01-.011",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}))}));const S=[{to:"https://github.com/BUGS-NYU",getMark:()=>n.createElement(k.Z,null)},{to:"https://discord.com/invite/75jgtXy7rz",getMark:()=>n.createElement(E,null)},{to:"mailto:bugsnyu@gmail.com",getMark:()=>n.createElement(j,null)},{to:"https://www.instagram.com/bugsnyu/",getMark:()=>n.createElement(U,null)}];function L(){return n.createElement("footer",{className:"w-full bg-[#3D1E5B] text-white"},n.createElement("div",{className:"mx-auto max-w-5xl px-8 py-24 flex flex-col gap-12 items-start justify-between md:flex-row md:items-center md:gap-0"},n.createElement("div",{className:"flex flex-col gap-y-4"},n.createElement("p",{className:"text-xl font-bold"},"BUGS @ NYU"),n.createElement("p",null,"NYU’s premier open source club"),n.createElement("div",{className:"flex flex-row gap-x-4"},S.map((e=>{let{to:t,getMark:r}=e;return n.createElement("a",{className:"hover:scale-110",key:t,href:t,target:"_blank",rel:"noopener noreferrer"},r())})))),n.createElement("p",null,n.createElement("a",{href:"https://discord.com/invite/75jgtXy7rz",className:"text-purple-400 font-bold hover:text-pink-200",target:"_blank",rel:"noopener noreferrer"},"Join us")," ","now and contribute to this website!")))}L.displayName="Footer";var M=L;const O=e=>{let{children:t}=e;const{currentTheme:r}=g();return n.createElement("div",{className:"min-h-screen antialiased "+r},n.createElement("div",{className:"light:bg-white dark:bg-zinc-900"},n.createElement(x,null),n.createElement("main",{className:"w-full min-h-[calc(100vh-12rem)] dark:text-white"},t),n.createElement(M,null)))};var z=e=>{let{children:t}=e;return n.createElement(v,null,n.createElement(O,null,t))}},5709:function(e,t,r){"use strict";r.r(t),r.d(t,{Head:function(){return u},default:function(){return c}});var n=r(7294),a=r(5815),o=r(4223),l=r(4255),s=r(762);const i=[{name:"NYU Syllabi",summary:"Repository of Syllabi for NYU schools",description:"NYU Syllabi is a place to find and upload syllabi for different NYU classes across all schools.",url:"https://nyusyllabi.com",githubUrl:"https://github.com/BUGS-NYU/nyu-syllabi/"},{name:"NYU CS Wiki",summary:"Guide for all NYU CS Students",description:"The NYU CS Wiki provides guidance and resources for NYU CS students at Tandon and CAS. It is a collaborative effort by students, for students, that gives detailed information on different topics including competitive programming, internships, clubs and more.",url:"https://nyucswiki.com",githubUrl:"https://github.com/BUGS-NYU/nyu-cs-wiki/"},{name:"BUGS Website",summary:"Website For The Club",description:"The website is built from scratch, using React, to be a one-stop-shop for information about the open source club. It provides information about what the club is for, the projects we work on, and upcoming events. We hope to constantly update the website with features.",url:"https://bugsnyu.com",githubUrl:"https://github.com/BUGS-NYU/bugs-website"},{name:"Schedge API",summary:"Course API for NYU",description:"Schedge is an open source API to NYU's course catalog, geared at eventually helping NYU students plan their courses easier and faster. Our goal with this API is to make it easier for students to plan out their schedules, and eventually to also do some of that for them",url:"https://nyu.a1liu.com/api/",githubUrl:"https://github.com/BUGS-NYU/schedge"}];var c=()=>n.createElement(l.Z,null,n.createElement("div",{className:"max-w-5xl mx-auto px-8 flex flex-col py-8"},n.createElement("h2",{className:"text-4xl font-bold"},"Projects"),n.createElement("p",{className:"mt-4"},"BUGS is meant to be a collaborative and inclusive environment for everyone. We're always welcome to hear your ideas and work on new projects. Here are some past projects we have worked on."),n.createElement("div",{className:"mt-12 grid grid-cols-1 gap-4 md:grid-cols-2"},i.map((e=>{let{name:t,summary:r,description:l,url:i,githubUrl:c}=e;return n.createElement(o.Z,{key:t,shadow:"normal",link:i},n.createElement("div",{className:"h-full flex flex-col"},n.createElement("h2",{className:"text-xl font-bold"},t),n.createElement("p",{className:"text-violet-600"},r),n.createElement("p",{className:"grow mt-4"},l),n.createElement("a",{className:"mt-6 justify-self-end",href:c,target:"_blank",rel:"noopener noreferrer"},n.createElement(a.Z,{className:"w-full flex gap-2 justify-center "},n.createElement(s.Z,{className:"inline-block"})," View Github"))))})))));const u=()=>n.createElement("title",null,"Projects")},762:function(e,t,r){"use strict";var n=r(7294),a=r(1292),o=function(){return o=Object.assign||function(e){for(var t,r=1,n=arguments.length;r<n;r++)for(var a in t=arguments[r])Object.prototype.hasOwnProperty.call(t,a)&&(e[a]=t[a]);return e},o.apply(this,arguments)};var l=n.forwardRef((function(e,t){var r=n.useContext(a.s),l=o(o({},r),e);return n.createElement("svg",o({width:"1.5em",height:"1.5em",strokeWidth:1.5,viewBox:"0 0 24 24",fill:"none",xmlns:"http://www.w3.org/2000/svg",color:"currentColor",ref:t},l),n.createElement("path",{d:"M16 22.027v-2.87a3.37 3.37 0 00-.94-2.61c3.14-.35 6.44-1.54 6.44-7a5.44 5.44 0 00-1.5-3.75 5.07 5.07 0 00-.09-3.77s-1.18-.35-3.91 1.48a13.38 13.38 0 00-7 0c-2.73-1.83-3.91-1.48-3.91-1.48A5.07 5.07 0 005 5.797a5.44 5.44 0 00-1.5 3.78c0 5.42 3.3 6.61 6.44 7a3.37 3.37 0 00-.94 2.58v2.87M9 20.027c-3 .973-5.5 0-7-3",stroke:"currentColor",strokeLinecap:"round",strokeLinejoin:"round"}))}));t.Z=l},1292:function(e,t,r){"use strict";r.d(t,{s:function(){return n}});var n=r(7294).createContext({})}}]);
//# sourceMappingURL=component---src-pages-projects-tsx-36611c48fff0d8bfc854.js.map