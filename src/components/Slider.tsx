import React, { useState } from "react";

type SliderProps = {
    children: React.ReactNode[];
}

function Slider({ children }: SliderProps) {
    const [sliderIndex, setSliderIndex] = useState(0);

    return (<div className="overflow-hidden relative">
        {/* Slider Content */}
        <div className="flex transition-transform"
            style={{
                transform: `translateX(-${sliderIndex * 100}%)`,
            }}>
            {children.map((element, elementIndex) => 
                <div className="flex-none w-full bg-orange-900 h-4" key={elementIndex}>
                    {element}
                </div>
            )}
        </div>

        {/* Left Button */}
        <button className="absolute left-0 top-0"
            onClick={() => {
                if (sliderIndex === 0) {
                    return;
                }
                setSliderIndex(sliderIndex - 1);
            }}>LEFT</button>

        {/* Right Button */}
        <button className="absolute right-0 top-0"
            onClick={() => {
                console.log("click"); // TEST
                if (sliderIndex === 2) {
                    return;
                }
                setSliderIndex(sliderIndex + 1);
            }}>RIGHT</button>
    </div>);
}

export default Slider;