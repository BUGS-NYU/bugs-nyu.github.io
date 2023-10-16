import classNames from 'classnames';
import React from 'react';

type CardElement = React.ElementRef<'a'>;
type CardProps = React.ComponentPropsWithoutRef<'a'> & {
  size?: 'small' | 'normal' | 'large';
  radius?: 'small' | 'normal' | 'large';
  shadow?: 'none' | 'normal';
  link?: string;
};

const classes = {
  base: 'bg-white border-gray-300 border dark:bg-neutral-900 dark:border-neutral-700 cursor-pointer hover:bg-gray-200 dark:hover:bg-neutral-800 transition-colors', // Add cursor-pointer for pointer cursor, hover:bg-gray-200 for hover effect, and transition-colors for smooth color transition
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
  (
    {
      children,
      className,
      size = 'normal',
      radius = 'normal',
      shadow = 'none',
      link,
      ...restProps
    },
    forwardedRef,
  ) => {
    return (
      <a
        href={link}
        target='_blank'
        className={classNames(
          classes.base,
          classes.size[size],
          classes.radius[radius],
          classes.shadow[shadow],
          className,
        )}
        {...restProps}
        ref={forwardedRef}
      >
        {children}
      </a>
    );
  },
);

Card.displayName = 'Card';

export default Card;
