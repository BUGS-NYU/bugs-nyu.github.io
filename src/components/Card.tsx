import classNames from 'classnames';
import React from 'react';
import Button from './Button';

type CardElement = React.ElementRef<'div'>;
type CardProps = React.ComponentPropsWithoutRef<'div'> & {
  size?: 'small' | 'normal' | 'large';
  radius?: 'small' | 'normal' | 'large';
  shadow?: 'none' | 'normal';
};

const classes = {
  base: 'bg-white border-gray-300 border',
  size: {
    small: 'p-4 text-sm',
    normal: 'p-8',
    large: 'p-16 text-lg',
  },
  radius: {
    small: 'rounded-sm',
    normal: 'rounded-lg',
    large: 'rounded-2xl',
  },
  shadow: {
    none: '',
    normal: 'drop-shadow-[0_8px_16px_rgba(151,151,151,0.25)]',
  },
};

const Card = React.forwardRef<CardElement, CardProps>(
  ({ children, className, size = 'normal', radius = 'normal', shadow = 'none', ...restProps }) => {
    return (
      <div
        className={classNames(
          classes.base,
          classes.size[size],
          classes.radius[radius],
          classes.shadow[shadow],
          className,
        )}
        {...restProps}
      >
        {children}
      </div>
    );
  },
);

export default Card;
