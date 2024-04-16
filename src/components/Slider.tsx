import React, { useState } from "react";
import { NavArrowLeft, NavArrowRight } from 'iconoir-react';

type SliderProps = {
    children: React.ReactNode[];
}

function Slider({ children }: SliderProps) {
    const [sliderIndex, setSliderIndex] = useState(0);

    return (<div className="overflow-hidden relative rounded-xl">
        {/* Slider Content */}
        <div className="flex transition-transform"
            style={{
                transform: `translateX(-${sliderIndex * 100}%)`,
            }}>
            {children.map((element, elementIndex) => 
                <div className="flex-none w-full bg-orange-900" key={elementIndex}>
                    {element}
                </div>
            )}
        </div>

        {/* Left Button */}
        <button className="absolute left-0 top-1/2 border-2 border-l-0 border-white rounded-r-xl -translate-y-1/2 hover:bg-opacity-[0.3] hover:bg-white"
            style={{
                display: sliderIndex === 0 ? "none" : "block"
            }}
            onClick={() => {
                if (sliderIndex === 0) {
                    return;
                }
                setSliderIndex(sliderIndex - 1);
            }}> <NavArrowLeft width={50} height={80} /> </button>

        {/* Right Button */}
        <button className="absolute right-0 top-1/2 border-2 border-r-0 border-white rounded-l-xl -translate-y-1/2 hover:bg-opacity-[0.3] hover:bg-white"
            style={{
                display: sliderIndex === children.length - 1 ? "none" : "block"
            }}
            onClick={() => {
                if (sliderIndex === children.length - 1) {
                    return;
                }
                setSliderIndex(sliderIndex + 1);
            }}> <NavArrowRight width={50} height={80} /> </button>
    </div>);
}

export default Slider;