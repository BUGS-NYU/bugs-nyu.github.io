import classNames from 'classnames';
import React from 'react';

type ButtonElement = React.ElementRef<'button'>;
type ButtonProps = React.ComponentPropsWithoutRef<'button'> & {
  variant?: 'default' | 'primary' | 'secondary';
  size?: 'small' | 'normal' | 'large';
  radius?: 'small' | 'normal' | 'large';
};

const classes = {
  base: '',
  disabled: 'opacity-50 cursor-not-allowed',
  size: {
    small: 'px-2 py-1 text-sm',
    normal: 'px-4 py-2',
    large: 'px-8 py-3 text-lg',
  },
  radius: {
    small: 'rounded-sm',
    normal: 'rounded',
    large: 'rounded-lg',
  },
  variant: {
    default:
      'bg-white dark:bg-neutral-900 dark:border-gray-300 border-gray-300 border hover:bg-gray-100 text-black dark:text-white',
    primary:
      'bg-neutral-900 dark:bg-neutral-800 hover:bg-neutral-800 dark:hover:bg-neutral-600 text-white',
    secondary: 'bg-gray-200 hover:bg-gray-800 text-gray-900 hover:text-white',
  },
};

const Button = React.forwardRef<ButtonElement, ButtonProps>(
  (
    {
      children,
      type,
      className,
      variant = 'default',
      size = 'normal',
      radius = 'normal',
      disabled,
      ...restProps
    },
    ref,
  ) => (
    <button
      ref={ref}
      disabled={disabled}
      type={type}
      className={classNames(
        classes.base,
        classes.size[size],
        classes.radius[radius],
        classes.variant[variant],
        disabled && classes.disabled,
        className,
      )}
      {...restProps}
    >
      {children}
    </button>
  ),
);

Button.displayName = 'Button';

export default Button;
