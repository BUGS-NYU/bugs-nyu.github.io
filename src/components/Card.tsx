import classNames from 'classnames';
import React from 'react';

type CardProps = {
  children: React.ReactNode;
  size?: 'small' | 'normal' | 'large';
  radius?: 'small' | 'normal' | 'large';
  shadow?: 'none' | 'normal';
  link?: string;
};

const classes = {
  base: 'bg-white border-gray-300 border dark:bg-neutral-900 dark:border-neutral-700 hover:bg-gray-200 dark:hover:bg-neutral-800 transition-colors',
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

function Card({ children, size = 'normal', radius = 'normal', shadow = 'none', link }: CardProps) {
  const className = classNames(
    classes.base,
    classes.size[size],
    classes.radius[radius],
    classes.shadow[shadow],
  );
  if (link === undefined) {
    return <div className={className}>{children}</div>;
  }
  return (
    <a href={link} target='_blank' rel='noreferrer' className={className}>
      {children}
    </a>
  );
}

Card.displayName = 'Card';

export default Card;
